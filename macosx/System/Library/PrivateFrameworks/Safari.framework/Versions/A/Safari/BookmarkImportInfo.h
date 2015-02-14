/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface BookmarkImportInfo : NSObject {

	char _testDriveBookmark;
	long long _importOrigin;
	NSString* _importOriginUUID;

}

@property (nonatomic,readonly) long long importOrigin;                                         //@synthesize importOrigin=_importOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * importOriginUUID;                               //@synthesize importOriginUUID=_importOriginUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isTestDriveBookmark,nonatomic,readonly) char testDriveBookmark;              //@synthesize testDriveBookmark=_testDriveBookmark - In the implementation block
-(id)initFromDictionary:(id)arg1 ;
-(char)isTestDriveBookmark;
-(id)initWithImportInfo:(id)arg1 testDriveStatus:(char)arg2 ;
-(id)_initWithImportOrigin:(long long)arg1 originUUID:(id)arg2 forTestDrive:(char)arg3 ;
-(long long)importOrigin;
-(NSString *)importOriginUUID;
-(id)initWithImportOrigin:(long long)arg1 originUUID:(id)arg2 ;
-(id)initForTestDriveWithImportOrigin:(long long)arg1 originUUID:(id)arg2 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

