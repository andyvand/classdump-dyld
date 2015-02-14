/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <Backup/BU_TMToolbarPushButton.h>

@class NSString;

@interface BU_TMDateText : BU_TMToolbarPushButton {

	double fLabelHorizontalCenter;
	NSString* fTextValue;
	NSString* fAccessibilityDescription;

}
-(BOOL)pressed;
-(CTFontRef)labelFont;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)title;
-(id)accessibilityDescription;
-(void)setDate:(TDate)arg1 ;
-(void)setAccessibilityDescription:(id)arg1 ;
-(CGImageRef)cachedDrawingImage;
-(double)labelHorizontalCenter;
-(double)verticalTextOffset;
-(void)updateRenderCache;
-(id)textValue;
-(void)setTextValue:(id)arg1 ;
-(void)setLabelHorizontalCenter:(double)arg1 ;
@end

