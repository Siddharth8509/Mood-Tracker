import jwt from"jsonwebtoken";


export const isLoggedIn = async (req,resizeBy,next) =>
{
    try
    {
        console.log(req.cookies);

        const token = req.cookies.token || "" ; //if token not their take an empty string

        if(!token)
        {
            console.log("No token");

            return res.status(401).json({
                success : false , 
                message : "No token found",
            })
        }

        const decode = jwt.verify(token , process.env.JWT_SECRET); //used to decode our token gives us result based on the key values we passed and also an object

        req.user = decode ; //we exported req.user from our middleware which contains all our user values in the form of an object

        next(); //Used to indicate that we finised our work go to the next step
    }
    catch(error)
    {
        console.log("Authentication Failed")
        return res.status(500).json({
            success : false , 
            message : "Authentication failed!",
        })
    
    }

   // next() ;even if an error occurs dont stop go to the next step
}