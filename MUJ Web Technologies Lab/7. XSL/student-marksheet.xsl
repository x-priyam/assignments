<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    
    
    <xsl:template match="/">
        <html>
            <head>
                <title>
                    Marksheet
                </title>
                <link rel="stylesheet" href="style.css"/>
                <link rel="icon" href="https://api.iconify.design/noto-v1/pizza.svg"/>
            </head>
            <body>
                <h1>
                    Student Marksheet 
                </h1>
                
                <table>
                    
                    <tr>
                        <th>
                            Reg. No
                        </th>
                        <th>
                            Name
                        </th>
                        <th>
                            Percentage
                        </th>
                        <th>
                            Division
                        </th>
                    </tr>
                    
                    <hr/>
                    
                    <xsl:for-each select="marks/student">
                        <xsl:choose>
                            <xsl:when test="percentage &gt;= 60">
                                <tr class="first">
                                    <td>
                                        <xsl:value-of select="regno"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="name"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="percentage"/>
                                    </td>
                                    <td>
                                        First
                                    </td>
                                </tr>
                            </xsl:when>
                            <xsl:when test="percentage &gt;= 50">
                                <tr class="second">
                                    <td>
                                        <xsl:value-of select="regno"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="name"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="percentage"/>
                                    </td>
                                    <td>
                                        Second
                                    </td>
                                </tr>
                            </xsl:when>
                            <xsl:when test="percentage &gt;= 33">
                                <tr class="third">
                                    <td>
                                        <xsl:value-of select="regno"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="name"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="percentage"/>
                                    </td>
                                    <td>
                                        Third
                                    </td>
                                </tr>
                            </xsl:when>
                            <xsl:otherwise>
                                <tr class="fail">
                                    <td>
                                        <xsl:value-of select="regno"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="name"/>
                                    </td>
                                    <td>
                                        <xsl:value-of select="percentage"/>
                                    </td>
                                    <td>
                                        Fail
                                    </td>
                                </tr>
                            </xsl:otherwise>
                        </xsl:choose>
                        
                    </xsl:for-each>
                    
                </table>
            </body>
        </html>
    </xsl:template>
    
    
    
</xsl:stylesheet>