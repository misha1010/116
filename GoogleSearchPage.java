package com.google;

import org.openqa.selenium.WebElement;

public class GoogleSearchPage {
    private WebElement QQ;

    public void searchFor(String text) {
        QQ.sendKeys(text);
        QQ.submit();
		//Just a comment
    }
}
