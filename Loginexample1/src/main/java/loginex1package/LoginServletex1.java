package loginex1package;

import java.io.PrintWriter;
import java.sql.*;
import java.io.IOException;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class LoginServletex1
 */
public class LoginServletex1 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String driver = "com.mysql.cj.jdbc.Driver";
		Connection con = null;

		try {
		PrintWriter out=response.getWriter();
		Class.forName(driver);
		con=DriverManager.getConnection("jdbc:mysql://localhost:3306/vamshi","root","root");
		String n=request.getParameter("txtName");
		String p=request.getParameter("txtPwd");
		PreparedStatement ps=con.prepareStatement("select uname, email from login where uname=? and password=?");
		ps.setString(1,n);
		ps.setString(2,p);
		ResultSet rs=ps.executeQuery();
		if(rs.next())
		{
			System.out.println("Your email ID: " +rs.getString("email"));
			request.setAttribute("emailid", rs.getString("email"));
			RequestDispatcher rd=request.getRequestDispatcher("welcomeex1.jsp");
			rd.forward(request, response);
		}
		else
		{
			out.println("<font color=red size=18>Login Failed!!<br>");
			out.println("<a href=login.jsp>Try AGAIN!!</a>");
		}
		
		} catch (ClassNotFoundException e) {
			
			e.printStackTrace();
		} catch (SQLException e) {
			
			e.printStackTrace();
		};
	}

}
