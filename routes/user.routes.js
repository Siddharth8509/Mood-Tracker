import express from "express"
import { registerUser, verifyUser  , profile , logout} from "../controller/user.controller.js";
import { isLoggedIn } from "../middleware/auth.middleware.js";

const router = express.Router();

router.post  ("/register",registerUser);

router.get("/verify:token", verifyUser);

router.get("/profile" , isLoggedIn , profile); 

router.get("logout" , isLoggedIn , logout)
export default router  ;