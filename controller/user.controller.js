import User from"../model/model.user.js";
import crypto from "crypto";
import nodemailer from "nodemailer";
import dotenv from "dotenv";
import jwt from "jsonwebtoken";

dotenv.config();
const registerUser = async(req , res ) => {
    // get data
    // validate
    // check if user already exists
    // create a user in database
    // create a verification token
    // save token in database
    // send token as email to user
    // send sucess status to the user 

    const {name,email,password} = req.body

    if(!name || !email || !password)
    {
        return res.status(400).json({
            message : "All feilds are required"
        })
    }
    //console.log(email); 
    try
    {
        const existingUser = await User.findOne({email}); //wait till the whole data is reterivied

        if(existingUser)
        {
            return res.status(400).json({
                message:"User already exists !"
            })
        }
        
        if(!User)//if there not exists any user 
        {
            return res.status(400).json({
                message:"User not registered!",
            })
        }

        //creating new user
        const newUser  = await User.create({
            name,
            email,
            password
        })

        //creating verification token
        const token  = crypto.randomBytes(32).toString("hex");
        console.log(token);
        User.verificationToken = token;


        await User.save();  

        //send email
        const transporter = nodemailer.createTransport({
        host: "process.env.MAILTRAP_HOST",
        port: "process.env.MAILTRAP_PORT",
        secure: false, // true for port 465, false for other ports
        auth: {
            user: "process.env.MAILTRAP_USERNAME",
            pass: "process.env.MAILTRAP_PASSWORD",
        },
        });

        const mailOption = {
            from: 'process.env.MAILTRAP_SENDEREMAIL', // sender address
            to: newUser.email, // list of receivers
            subject: "Verify your email", // Subject line
            text:`Please click on the follwoing link : 
            ${process.env.MAILTRAP_BASEURL}/api/v1/users/verify/${token}`, // plain text body
        }
         
        await transporter.sendMail(mailOption);

        //sucess status to the user
        res.status(201).json({
            message:"User registered sucessfully!",
            success:true,
        })
    }
    catch(error)
    {
        res.status(400).json({
            message:"User not registered !",
            success:false,
            error
        })
    }

    //create a verification token
};

const verifyUser = async(req,res) => {
    //get token from url
    //validate the token
    //find user based on token
    //if user found set isVerified : true
    //remove verification token
    //save
    //return response

    const {token} = req.params;

    if(!token)
    {
        return res.status(400).json({
            message:"Invalid Token",
        })
    }

    const newUser = await User.findOne({verificationToken : token});

    newUser.isVerified = true;
    newUser.verificationToken = undefined;

    await newUser.save();
}

const login = async (req,res) =>
{
    const {email,password} = req.body;

    if(!email || !password)
    {
        return res.status(400).json({
        message : "All feilds are required"
        })
    }

    try
    {
        const newUser = await User.findOne({email});
        
        if(!newUser)
        {
            return res.status(400).json({
            message : "Invalid email or password"
            })
        }

        const isMatch = await bcrypt.compare(password,User.password);

        if(!isMatch)
        {
            return res.status(400).json({
                message : "Invalid email or password"
            })   
        }

        const token = jwt.sign({id : newUsers._id , role : user.role},
            process.env.JWT_SECRET ,{
                expiresIn : '24h',
            }                       //jwt secrete stored in .env file
        );

        //store token in cookies {depends on the application we are working on}
        const cookieOptions = {
            httpOnly : true , 
            secure : true,
            maxAge : 24*60*60*1000,
        }
        res.cookie("token",token,cookieOptions);

        res.status(200).json({
            message:"Login sucessfull",
            user : {
                id : newUser._id,
                name : newUser.name,
                role : newUser.role
            }
        })
    }
    catch(error)
    {
        res.status(400).json({
            message:"LogIn failed!",
            success:false,
            error
        })
    }
}

const profile = async(req,res) =>{
    try
    {
        const data = req.user;
        
        const newUser = await newUser.findById(req.user.id).select('-password')//this meand give me everyting except password

        if(!newUser)
        {
            return res.status(400).json({
                success: false,
                message : "User not found" ,
            })
        }

        res.status(200).json({
            success:true,
            message : "User found",
        })
    }
    catch(error)
    {
        res.status(400).json({
            message:"User not Found !",
            success:false,
            error
        })
    }
};

const logout = (req,res) =>{
    try {

        res.cookie(token , ' ',{
            expires : new Date(0) , //Clear a cookie (set its expiry to the past). jan 1st 1970
        } )


        res.status(200).json({
            success:true,
            message : "User Logged out",
        })


    } catch (error) {
        res.status(400).json({
            message:"Logout failed!",
            success:false,
            error
        })
    }
}

const forgotPassword = (req,res) =>
{
 //get email from req.body
 //find user based on email
 //reset token + reset expiry 
 //user.save()
 //send email => design url
 
}

const resetPassoword = (req,res) =>
{
    //collect token from params
    //password from req.body
    //finding user 

    const {token} = req.params;
    const {password} = req.body;

    try {
        newUser.findOne({
            resetPasswordToken : token , 
            resetPasswordTokenExpires :{$gt:Date.now()} //in mongodb $gt indicates that our value should be greater than the current value.
        })
        //set passowrd in user
        //resetToken , resetExpiry => empty
        //save
    } catch (error) {
        
    }
}

export { registerUser , verifyUser , profile , logout , forgotPassword , resetPassoword}