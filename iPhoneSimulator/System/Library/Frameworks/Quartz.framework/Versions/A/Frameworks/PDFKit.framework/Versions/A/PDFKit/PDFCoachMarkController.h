/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFCoachMark;

@interface PDFCoachMarkController : NSObject {

	PDFCoachMark* _coachMark;

}
-(id)init;
-(void)dealloc;
-(void)coachMarkExpired:(id)arg1 ;
-(void)cancelCurrentCoachMark;
-(void)addCoachMarkWithContentRect:(CGRect)arg1 contentImage:(id)arg2 forView:(id)arg3 selfDestruct:(char)arg4 ;
-(id)currentCoachMark;
@end

