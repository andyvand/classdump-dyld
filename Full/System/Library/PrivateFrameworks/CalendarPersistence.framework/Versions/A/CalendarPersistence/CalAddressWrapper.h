/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CalAddressWrapper : NSObject {

	NSString* _address;
	NSString* _cuAddress;
	int _freeBusyType;
	char _fromPrevious;

}

@property (assign) char fromPrevious;              //@synthesize fromPrevious=_fromPrevious - In the implementation block
@property (assign) int freeBusyType;               //@synthesize freeBusyType=_freeBusyType - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)firstName;
-(int)freeBusyType;
-(void)setFreeBusyType:(int)arg1 ;
-(int)userType;
-(id)principalPath;
-(id)lastName;
-(id)completionForSubstring:(id)arg1 ;
-(void)setCUAddress:(id)arg1 ;
-(char)isGroup;
-(id)cuAddress;
-(id)displayedName;
-(char)fromPrevious;
-(void)setFromPrevious:(char)arg1 ;
-(char)isLocation;
-(char)isPerson;
-(char)isResource;
-(id)sortString;
-(id)initWithAddress:(id)arg1 ;
-(char)isRoom;
-(id)groupCompletionForSubstring:(id)arg1 count:(long long)arg2 ;
-(id)address;
@end

