/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/IMRenderingFoundation-Structs.h>
#import <IMRenderingFoundation/NSCoding.h>
#import <IMRenderingFoundation/NSCopying.h>

@interface SOMessageColor : NSObject <NSCoding, NSCopying>

@property (getter=isCannedColor,readonly) char cannedColor; 
@property (readonly) long long cannedColorTag; 
+(id)messageColorForTag:(long long)arg1 ;
+(id)defaultOutgoingBackgroundMessageColor;
+(id)defaultIncomingBackgroundMessageColor;
+(id)defaultFontMessageColor;
+(id)messageColorForColor:(id)arg1 ;
-(char)isCannedColor;
-(id)colorForIMHandle:(id)arg1 ;
-(long long)cannedColorTag;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
