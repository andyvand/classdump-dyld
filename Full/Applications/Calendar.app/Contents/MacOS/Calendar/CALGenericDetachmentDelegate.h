/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CALDetachmentDelegate.h>
#import <Calendar/NSCopying.h>

@class NSMutableDictionary;

@interface CALGenericDetachmentDelegate : NSObject <CALDetachmentDelegate, NSCopying> {

	char _plural;
	NSMutableDictionary* _changes;

}
+(id)delegate;
-(void)setPlural:(char)arg1 ;
-(char)isPlural;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)decideDetachmentFor:(id)arg1 withOccurrence:(id)arg2 ;
-(void)setChangeInformations:(id)arg1 ;
@end

