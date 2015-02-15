/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarDraw.framework/Versions/A/CalendarDraw
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CalendarDraw/CalendarDraw-Structs.h>
@interface CalDrawImageRendering : NSObject
+(id)birthdaySmallSelectedDotImage;
+(id)birthdaySmallDotImage;
+(id)eventIcon:(id)arg1 withName:(id)arg2 withColor:(id)arg3 ;
+(id)accountDotImageWithIdentifier:(id)arg1 ;
+(id)cachedOccurrenceImageForCalendarColor:(id)arg1 tileOptions:(id)arg2 ;
+(id)birthdayDotImage;
+(id)dotImageForOccurrenceColor:(id)arg1 diameter:(double)arg2 strokeWidth:(double)arg3 options:(id)arg4 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(void)pushRoundedRectPath:(CGRect)arg1 inContext:(CGContextRef)arg2 withCornerRadius:(double)arg3 ;
+(CGImageRef)newCGImageForOccurrenceColor:(id)arg1 height:(double)arg2 pathRadius:(double)arg3 alpha:(double)arg4 options:(id)arg5 ;
+(id)_cachedImageForCalendarColor:(id)arg1 selected:(char)arg2 declined:(char)arg3 cancelled:(char)arg4 tentative:(char)arg5 needsReply:(char)arg6 colorBar:(char)arg7 dayViewBackgroundStyle:(int)arg8 ;
+(id)cachedImageForOccurrenceColor:(id)arg1 height:(double)arg2 pathRadius:(double)arg3 alpha:(double)arg4 options:(id)arg5 category:(id)arg6 ;
+(id)imageWithName:(id)arg1 andType:(id)arg2 ;
+(id)_imageWithName:(id)arg1 andColor:(id)arg2 ;
+(id)_imageWithName:(id)arg1 andCalColor:(id)arg2 ;
+(void)_drawIcon:(id)arg1 inRect:(CGRect)arg2 withRenderer:(id)arg3 ;
+(id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4 colorBar:(char)arg5 ;
+(id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBar:(char)arg3 ;
+(id)_lightColorForColor:(id)arg1 opaque:(char)arg2 ;
+(id)_lightStripeColorForColor:(id)arg1 ;
+(CGImageRef)imageRefWithName:(id)arg1 ;
+(id)cachedImageForOccurrenceColor:(id)arg1 options:(id)arg2 ;
+(id)cachedCheckboxImageForColor:(id)arg1 ;
+(id)cachedSwatchImageForColor:(id)arg1 largeSize:(char)arg2 ;
+(id)oldTentativeOutlineWithColor:(id)arg1 ;
+(id)tentativeOutlineWithColor:(id)arg1 ;
+(id)tentativeCornersWithColor:(id)arg1 ;
+(id)allDayInvitationOutlineWithColor:(id)arg1 ;
+(id)allDayInvitationOutlineFlatBothWithColor:(id)arg1 ;
+(id)allDayInvitationOutlineFlatRightWithColor:(id)arg1 ;
+(id)allDayInvitationOutlineFlatLeftWithColor:(id)arg1 ;
+(void)drawIconsInRect:(CGRect)arg1 withRenderer:(id)arg2 ;
+(id)birthdaySelectedDotImage;
+(id)birthdayAllDayDotImage;
+(id)birthdayAllDaySelectedDotImage;
@end
