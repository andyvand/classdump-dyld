/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SocialUI/SocialUI-Structs.h>
@interface SOFileTransferRenderer : NSObject
+(id)getFileTransferImageForIcon:(id)arg1 string:(id)arg2 transcriptStyleID:(id)arg3 fgColor:(id)arg4 bgColor:(id)arg5 ;
+(id)wrapPass:(id)arg1 inStyle:(id)arg2 fgColor:(id)arg3 bgColor:(id)arg4 ;
+(id)wrapImageInStyle:(id)arg1 overlayPlayButton:(char)arg2 transcriptStyleID:(id)arg3 ;
+(void)drawBalloonImage:(id)arg1 withOp:(unsigned long long)arg2 forSize:(CGSize)arg3 ;
+(void)drawBalloonMaskForRect:(CGRect)arg1 ;
+(void)drawEtchingForRect:(CGRect)arg1 ;
+(void)drawBalloonGlossForRect:(CGRect)arg1 ;
+(int)maxImageWidth;
+(int)maxImageHeight;
@end
