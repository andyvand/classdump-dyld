/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, NSDate, GSPermanentStorage;

@interface BRNonLocalVersion : NSObject {

	NSURL* _url;
	NSString* _displayName;
	NSString* _etag;
	unsigned long long _size;
	NSDate* _modificationDate;
	NSString* _lastEditorDeviceName;
	char _hasThumbnail;
	GSPermanentStorage* _versionsStore;
	long long _sandboxHandle;

}

@property (nonatomic,readonly) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * etag;                                                 //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
@property (nonatomic,readonly) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) NSString * lastEditorDeviceName;                                 //@synthesize lastEditorDeviceName=_lastEditorDeviceName - In the implementation block
@property (assign,nonatomic) char hasThumbnail;                                                 //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (nonatomic,readonly) char isLatestVersion; 
+(id)listVersionsOfDocumentAtURL:(id)arg1 ;
-(char)isLatestVersion;
-(id)initWithURL:(id)arg1 physicalURL:(id)arg2 extension:(id)arg3 etag:(id)arg4 hasThumbnail:(char)arg5 lastEditorDeviceName:(id)arg6 versionsStore:(id)arg7 ;
-(NSString *)lastEditorDeviceName;
-(void)setHasThumbnail:(char)arg1 ;
-(char)hasThumbnail;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(unsigned long long)size;
-(NSString *)displayName;
-(NSDate *)modificationDate;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(NSString *)etag;
@end

