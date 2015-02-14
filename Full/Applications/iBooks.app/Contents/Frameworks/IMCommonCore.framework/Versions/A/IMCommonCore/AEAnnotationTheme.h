/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class NSColor, NSFont;

@interface AEAnnotationTheme : NSObject {

	char _invertedContent;

}

@property (assign,nonatomic) char invertedContent;                                  //@synthesize invertedContent=_invertedContent - In the implementation block
@property (nonatomic,readonly) int annotationStyle; 
@property (nonatomic,readonly) char isUnderline; 
@property (nonatomic,readonly) NSColor * highlightColor; 
@property (nonatomic,readonly) NSColor * noteFillColor; 
@property (nonatomic,readonly) NSColor * noteBorderColor; 
@property (nonatomic,readonly) double noteShadowRadius; 
@property (nonatomic,readonly) double noteShadowOpacity; 
@property (nonatomic,readonly) NSColor * noteShadowColor; 
@property (nonatomic,readonly) CGSize noteShadowOffset; 
@property (nonatomic,readonly) NSColor * notesSidebarBarColor; 
@property (nonatomic,readonly) NSColor * notesSidebarTextColor; 
@property (nonatomic,readonly) NSFont * noteTextFont; 
@property (nonatomic,readonly) NSFont * noteTextFontInTable; 
@property (nonatomic,readonly) NSColor * noteTextColor; 
@property (nonatomic,readonly) NSColor * noteMarkerFillColor; 
@property (nonatomic,readonly) NSColor * noteMarkerBorderColor; 
@property (nonatomic,readonly) NSColor * noteMarkerStrikethroughColor; 
+(id)themeDescriptions;
+(id)themeItemForAnnotationStyle:(int)arg1 propertyName:(id)arg2 ;
+(id)colorForAnnotationStyle:(int)arg1 propertyName:(id)arg2 inverted:(char)arg3 ;
+(id)blueTheme:(char)arg1 ;
+(id)greenTheme:(char)arg1 ;
+(id)yellowTheme:(char)arg1 ;
+(id)pinkTheme:(char)arg1 ;
+(id)purpleTheme:(char)arg1 ;
+(id)themeForAnnotationStyle:(int)arg1 invertedContent:(char)arg2 ;
+(id)underlineTheme:(char)arg1 ;
+(id)theme:(char)arg1 ;
+(id)highlightTextColor:(char)arg1 ;
+(id)themeForAnnotationStyle:(int)arg1 invertedContent:(char)arg2 isUnderline:(char)arg3 ;
-(int)annotationStyle;
-(char)invertedContent;
-(void)setInvertedContent:(char)arg1 ;
-(NSColor *)notesSidebarTextColor;
-(NSFont *)noteTextFontInTable;
-(NSColor *)noteMarkerBorderColor;
-(NSColor *)noteFillColor;
-(NSColor *)noteBorderColor;
-(NSFont *)noteTextFont;
-(NSColor *)noteTextColor;
-(NSColor *)noteShadowColor;
-(CGSize)noteShadowOffset;
-(double)noteShadowRadius;
-(double)noteShadowOpacity;
-(NSColor *)noteMarkerFillColor;
-(NSColor *)noteMarkerStrikethroughColor;
-(char)isUnderline;
-(NSColor *)notesSidebarBarColor;
-(NSColor *)highlightColor;
@end

