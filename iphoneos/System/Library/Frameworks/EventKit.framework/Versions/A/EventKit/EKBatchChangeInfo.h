/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class NSString;

@interface EKBatchChangeInfo : NSObject {

	char _changePending;
	NSString* _originalUID;
	NSString* _currentUID;

}

@property (assign) char changePending;                  //@synthesize changePending=_changePending - In the implementation block
@property (retain) NSString * originalUID;              //@synthesize originalUID=_originalUID - In the implementation block
@property (retain) NSString * currentUID;               //@synthesize currentUID=_currentUID - In the implementation block
-(char)changePending;
-(char)affectsObject:(id)arg1 ;
-(id)updatedIdentifier:(id)arg1 ;
-(id)initWithCurrentUID:(id)arg1 originalUID:(id)arg2 ;
-(void)setChangePending:(char)arg1 ;
-(void)setCurrentUID:(NSString *)arg1 ;
-(void)setOriginalUID:(NSString *)arg1 ;
-(NSString *)currentUID;
-(NSString *)originalUID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

