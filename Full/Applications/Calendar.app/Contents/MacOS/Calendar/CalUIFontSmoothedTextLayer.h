/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString;

@interface CalUIFontSmoothedTextLayer : CALayer {

	NSAttributedString* _attrTitle;

}

@property (retain) NSAttributedString * attrTitle;              //@synthesize attrTitle=_attrTitle - In the implementation block
-(NSAttributedString *)attrTitle;
-(void)setAttrTitle:(NSAttributedString *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)stringValue;
-(void)setAttributedStringValue:(id)arg1 ;
@end

