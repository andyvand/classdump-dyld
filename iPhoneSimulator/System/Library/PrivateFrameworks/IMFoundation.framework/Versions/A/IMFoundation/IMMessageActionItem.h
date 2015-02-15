/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMItem.h>
#import <IMFoundation/NSCoding.h>
#import <IMFoundation/NSCopying.h>
#import <IMFoundation/IMRemoteObjectCoding.h>

@class NSString;

@interface IMMessageActionItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {

	long long _actionType;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;
	NSString* _originalMessageGUID;

}

@property (assign,nonatomic) long long actionType;                        //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                      //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;               //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                 //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
@property (nonatomic,retain) NSString * originalMessageGUID;              //@synthesize originalMessageGUID=_originalMessageGUID - In the implementation block
-(id)_newChatItems;
-(NSString *)otherHandle;
-(NSString *)originalMessageGUID;
-(id)copyDictionaryRepresentation;
-(NSString *)otherUnformattedID;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(void)setOtherHandle:(NSString *)arg1 ;
-(NSString *)otherCountryCode;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(void)setOriginalMessageGUID:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
@end

