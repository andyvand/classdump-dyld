/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CALGenericDetachmentDelegate.h>

@interface CALOneShotDetachmentDelegate : CALGenericDetachmentDelegate {

	int _action;
	char _alreadyAnswered;

}
-(void)setAlreadyAnswered:(char)arg1 ;
-(id)init;
-(void)setAction:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(int)decideDetachmentFor:(id)arg1 withOccurrence:(id)arg2 ;
@end

