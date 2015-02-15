/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GSAdditionStoringGSAdditionStoringPrivate;
#import <GenerationalStorage/GenerationalStorage-Structs.h>
@class NSObject, NSNumber, NSString, NSURL, NSDictionary, NSData;

@interface GSAddition : NSObject {

	NSObject*<GSAdditionStoring>*<GSAdditionStoringPrivate> _storage;
	unsigned long long _options;
	NSNumber* _size;
	NSString* _namespace;
	NSURL* _url;
	NSString* _originalName;
	NSString* _displayName;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSString * br_lastEditorDeviceName; 
@property (nonatomic,readonly) unsigned long long options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage;                            //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSString * nameSpace;                                            //@synthesize namespace=_namespace - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSString * originalPOSIXName; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
@property (nonatomic,readonly) char isSavedConflict; 
@property (nonatomic,readonly) NSData * sandboxExtension; 
+(id)makeNameForUser:(unsigned)arg1 name:(id)arg2 ;
-(NSString *)br_lastEditorDeviceName;
-(char)br_markResolvedWithError:(id*)arg1 ;
-(NSObject*<GSAdditionStoring>)storage;
-(id)displayNameWithError:(id*)arg1 ;
-(id)originalPOSIXNameWithError:(id*)arg1 ;
-(id)userInfoWithError:(id*)arg1 ;
-(void)_refreshWithDictionary:(id)arg1 ;
-(NSData *)sandboxExtension;
-(char)refreshWithError:(id*)arg1 ;
-(id)_initWithStorage:(id)arg1 andDictionary:(id)arg2 ;
-(char)setDisplayName:(id)arg1 error:(id*)arg2 ;
-(char)internalStat:(stat*)arg1 ;
-(char)copyAdditionContentToURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)originalPOSIXName;
-(char)isSavedConflict;
-(char)setOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)replaceItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)mergeUserInfo:(id)arg1 error:(id*)arg2 ;
-(char)setNameSpace:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)userInfo;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(NSString *)name;
-(NSNumber *)size;
-(unsigned long long)options;
-(NSString *)displayName;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(NSString *)nameSpace;
@end

