/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class NSURL, NSString;

@interface CalStoreRemoteManagedAttendee : CalStoreRemoteManagedObject {

	NSURL* _address;
	NSString* _commonName;
	NSString* _status;
	int _type;

}

@property (nonatomic,retain) NSURL * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * commonName;              //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,retain) NSString * status;                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(NSString *)status;
-(void)setType:(int)arg1 ;
-(NSString *)commonName;
-(void)setStatus:(NSString *)arg1 ;
-(void)setCommonName:(NSString *)arg1 ;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
@end

