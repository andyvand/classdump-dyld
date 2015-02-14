/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL, NSDictionary, GSAddition;

@interface QLThumbnailAddition : NSObject {

	NSURL* _additionURL;
	long long _additionURLSandboxToken;
	NSDictionary* _metadata;
	GSAddition* _addition;
	NSDictionary* _thumbnailDataDictionary;

}

@property (retain) NSURL * additionURL;                                 //@synthesize additionURL=_additionURL - In the implementation block
@property (retain) NSDictionary * metadata;                             //@synthesize metadata=_metadata - In the implementation block
@property (retain) NSDictionary * thumbnailDataDictionary;              //@synthesize thumbnailDataDictionary=_thumbnailDataDictionary - In the implementation block
+(char)associateImage:(CGImageRef)arg1 metadata:(id)arg2 withURL:(id)arg3 error:(id*)arg4 ;
+(id)plistInExtendedAttributeNamed:(const char*)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4 ;
+(char)_hitAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
+(char)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(char)arg3 atURL:(id)arg4 error:(id*)arg5 ;
+(char)_hitAdditionsOnURL:(id)arg1 error:(id*)arg2 ;
+(char)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4 ;
+(char)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4 ;
+(id)_additionCreationInfo;
+(char)imageContainsAlpha:(CGImageRef)arg1 ;
+(char)_removedAdditionsOnURLUsingDaemon:(id)arg1 ;
+(char)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2 ;
+(char)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
+(char)_removedAdditionsOnURL:(id)arg1 ;
+(Class)imageClassWithError:(id*)arg1 ;
+(char)removeAdditionsOnURL:(id)arg1 error:(id*)arg2 ;
+(char)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4 ;
+(char)hasThumbnailOnImmutableDocumentAtURL:(id)arg1 ;
+(id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2 ;
+(char)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)metadata;
-(void)setAdditionURL:(NSURL *)arg1 ;
-(void)setThumbnailDataDictionary:(NSDictionary *)arg1 ;
-(NSURL *)additionURL;
-(id)thumbnailURLForKey:(id)arg1 ;
-(char)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(char)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2 ;
-(char)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
-(id)thumbnailDataForKey:(id)arg1 ;
-(CGImageRef)thumbnailWithMaximumDimension:(double)arg1 properties:(id*)arg2 flavor:(int*)arg3 contentRect:(CGRect*)arg4 lowQuality:(char*)arg5 ;
-(id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(id)thumbnailsDictionaryWithError:(id*)arg1 ;
-(void*)cacheVersion;
-(NSDictionary *)thumbnailDataDictionary;
-(void)dealloc;
-(void)setMetadata:(NSDictionary *)arg1 ;
@end

