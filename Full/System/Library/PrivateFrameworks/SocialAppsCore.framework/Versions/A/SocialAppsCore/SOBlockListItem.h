/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialAppsCore.framework/Versions/A/SocialAppsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMPerson, NSString;

@interface SOBlockListItem : NSObject {

	IMPerson* _person;
	NSString* _address;
	void* _cmfItem;
	NSString* _cachedFormattedHandle;
	NSString* _cachedFormattedPersonName;

}

@property (nonatomic,retain) IMPerson * person;                                 //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) NSString * address;                                //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) void* cmfItem;                                     //@synthesize cmfItem=_cmfItem - In the implementation block
@property (nonatomic,retain) NSString * cachedFormattedHandle;                  //@synthesize cachedFormattedHandle=_cachedFormattedHandle - In the implementation block
@property (nonatomic,retain) NSString * cachedFormattedPersonName;              //@synthesize cachedFormattedPersonName=_cachedFormattedPersonName - In the implementation block
-(id)formattedAddress;
-(void)lookupPerson;
-(NSString *)cachedFormattedHandle;
-(void)setCachedFormattedHandle:(NSString *)arg1 ;
-(id)formattedPersonNameWithAddress:(char)arg1 ;
-(id)formattedPersonNameWithAddress;
-(id)initWithPerson:(id)arg1 address:(id)arg2 cmfItemRef:(void*)arg3 ;
-(id)formattedHandle;
-(id)formattedPersonName;
-(char)isEqualToBlockListItem:(id)arg1 ;
-(void*)cmfItem;
-(void)setCmfItem:(void*)arg1 ;
-(NSString *)cachedFormattedPersonName;
-(void)setCachedFormattedPersonName:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)fullName;
-(IMPerson *)person;
-(void)setPerson:(IMPerson *)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
@end

