<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0"
	xmlns:html="http://www.w3.org/1999/xhtml"
	xmlns="http://www.w3.org/1999/xhtml"
	xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
	xmlns:dtbook="http://www.daisy.org/z3986/2005/dtbook/"
	exclude-result-prefixes="xsl dtbook html #default"
    >

	<xsl:output doctype-public="-//W3C//DTD XHTML 1.0 Strict//EN" doctype-system="http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"
	 method="html" indent="yes"  encoding="UTF-8"  />

	<xsl:template match="doctitle | docauthor | dtbook:doctitle | dtbook:docauthor">
		<p>
			<strong>
				<xsl:apply-templates select="@* | node()"/>
			</strong>
		</p>
	</xsl:template>

	<xsl:template match="dtbook:caption | caption">
		<span class="caption">
			<xsl:apply-templates select="@* | node()"/>
		</span>
	</xsl:template>

	<xsl:template match="dtbook:noteref | noteref">
		<sup>
			<xsl:copy>
				<xsl:apply-templates select="@* | node()"/>
			</xsl:copy>
		</sup>
	</xsl:template>


	<xsl:template match="@* | node()" >
		<xsl:copy>
			<xsl:apply-templates select="@* | node()"/>
		</xsl:copy>
	</xsl:template>

</xsl:stylesheet>
