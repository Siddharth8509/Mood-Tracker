import mongoose from "mongoose";
import bcrypt from "bcryptjs";

const userSchema = new mongoose.Schema({
    name:String,
    email:String,
    password:String,
    role: 
    {
        type:String,
        enum: ["User","Admin"],
        default:"User"
    },
    isVerified:{
        type:Boolean,
        default:false,
    },
    verificationToken:{
        type:String,
    },
    resetPasswordToken:{
        type:String,
    },
    resetPasswordTokenExpires:{
        type:Date,
    },
    

} ,{
    Timestamp:true
});

userSchema.pre("save" , async function(next)
{
    if(this.isModified("password"))
    {
        this.password =  await bcrypt.hash(this.password);
    }
    next(); 
});



const User = mongoose.model("User" , userSchema);

export default User;  