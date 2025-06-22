import mongoose from "mongoose";
import dotenv from "dotenv";

dotenv.config();

const db = ()=>{
    mongoose
        .connect(process.env.MONGO_URL)
        .then(()=>
        {
            console.log("connection established to database");
        })
        .catch((err)=>
        {
            console.log("Failed to  establish connection with database");
        })
    }

export default db;