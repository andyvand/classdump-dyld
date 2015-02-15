/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFont, NSColor, NSAttributedString;

@interface CalUILocationFieldOptions : NSObject {

	char _shouldDisplaySubtextField;
	char _shouldDisplayControlBackground;
	char _shouldDisplayLocationIcon;
	char _shouldDrawControlBorder;
	char _shouldDrawControlBezel;
	char _shouldDisplayLocationDistances;
	char _includeLocalSearchResults;
	char _includeCurrentLocation;
	char _includeHomeWork;
	char _enableAutomaticLinkDetection;
	NSFont* _controlFont;
	NSColor* _textColor;
	NSColor* _linkColor;
	NSAttributedString* _placeholderAttributedString;

}

@property (assign) char shouldDisplaySubtextField;                                //@synthesize shouldDisplaySubtextField=_shouldDisplaySubtextField - In the implementation block
@property (assign) char shouldDisplayControlBackground;                           //@synthesize shouldDisplayControlBackground=_shouldDisplayControlBackground - In the implementation block
@property (assign) char shouldDisplayLocationIcon;                                //@synthesize shouldDisplayLocationIcon=_shouldDisplayLocationIcon - In the implementation block
@property (assign) char shouldDrawControlBorder;                                  //@synthesize shouldDrawControlBorder=_shouldDrawControlBorder - In the implementation block
@property (assign) char shouldDrawControlBezel;                                   //@synthesize shouldDrawControlBezel=_shouldDrawControlBezel - In the implementation block
@property (assign) char shouldDisplayLocationDistances;                           //@synthesize shouldDisplayLocationDistances=_shouldDisplayLocationDistances - In the implementation block
@property (assign) char includeLocalSearchResults;                                //@synthesize includeLocalSearchResults=_includeLocalSearchResults - In the implementation block
@property (assign) char includeCurrentLocation;                                   //@synthesize includeCurrentLocation=_includeCurrentLocation - In the implementation block
@property (assign) char includeHomeWork;                                          //@synthesize includeHomeWork=_includeHomeWork - In the implementation block
@property (assign) char enableAutomaticLinkDetection;                             //@synthesize enableAutomaticLinkDetection=_enableAutomaticLinkDetection - In the implementation block
@property (retain) NSFont * controlFont;                                          //@synthesize controlFont=_controlFont - In the implementation block
@property (retain) NSColor * textColor;                                           //@synthesize textColor=_textColor - In the implementation block
@property (retain) NSColor * linkColor;                                           //@synthesize linkColor=_linkColor - In the implementation block
@property (retain) NSAttributedString * placeholderAttributedString;              //@synthesize placeholderAttributedString=_placeholderAttributedString - In the implementation block
-(void)setLinkColor:(NSColor *)arg1 ;
-(char)enableAutomaticLinkDetection;
-(void)setShouldDisplaySubtextField:(char)arg1 ;
-(void)setShouldDisplayLocationIcon:(char)arg1 ;
-(void)setShouldDisplayLocationDistances:(char)arg1 ;
-(void)setIncludeLocalSearchResults:(char)arg1 ;
-(void)setIncludeCurrentLocation:(char)arg1 ;
-(void)setShouldDisplayControlBackground:(char)arg1 ;
-(void)setShouldDrawControlBorder:(char)arg1 ;
-(void)setShouldDrawControlBezel:(char)arg1 ;
-(void)setEnableAutomaticLinkDetection:(char)arg1 ;
-(void)setControlFont:(NSFont *)arg1 ;
-(char)shouldDisplayLocationIcon;
-(char)shouldDisplayLocationDistances;
-(char)includeLocalSearchResults;
-(char)includeCurrentLocation;
-(char)includeHomeWork;
-(void)setIncludeHomeWork:(char)arg1 ;
-(NSFont *)controlFont;
-(char)shouldDisplaySubtextField;
-(char)shouldDisplayControlBackground;
-(char)shouldDrawControlBorder;
-(char)shouldDrawControlBezel;
-(void)setTextColor:(NSColor *)arg1 ;
-(NSColor *)textColor;
-(NSColor *)linkColor;
-(void)setPlaceholderAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)placeholderAttributedString;
@end

