/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCommonCore/AEAnnotationSerializationManager.h>

@protocol AEAnnotationSerializationManager <NSObject>
@required
-(id)urlForOfflineDBWithAssetID:(id)arg1;
-(char)isAssetOfflineWithAssetID:(id)arg1;
-(id)annotationProviderForOfflineDBWithAssetID:(id)arg1;
-(void)removeOfflineDBFilesWithAssetID:(id)arg1 exceptBookVersionString:(id)arg2;
-(char)takeBookOfflineIfManagedWithAnnotationProvider:(id)arg1 assetID:(id)arg2;

@end


@protocol AEBookMetadataProvider;
@class NSString;

@interface AEAnnotationSerializationManager : NSObject <AEAnnotationSerializationManager> {

	id<AEBookMetadataProvider> bookMetadataProvider;

}

@property (nonatomic,retain) id<AEBookMetadataProvider> bookMetadataProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)annotationSerializationManagerWithBookMetadataProvider:(id)arg1 ;
+(char)managedBooksAllowedToSync;
+(id)annotationSerializationManagerWithAssetID:(id)arg1 assetURL:(id)arg2 bookVersionString:(id)arg3 pathToAssetContextDirectory:(id)arg4 isManagedBook:(char)arg5 ;
-(id)initWithBookMetadataProvider:(id)arg1 ;
-(void)setBookMetadataProvider:(id<AEBookMetadataProvider>)arg1 ;
-(id)urlForOfflineDBWithAssetID:(id)arg1 ;
-(id<AEBookMetadataProvider>)bookMetadataProvider;
-(id)p_filenameForOfflineDBWithAssetID:(id)arg1 ;
-(char)isAssetOfflineWithAssetID:(id)arg1 ;
-(void)protected_takeAssetOfflineWithProvider:(id)arg1 assetID:(id)arg2 copyData:(char)arg3 ;
-(char)p_ensureDirectoryPathExists:(id)arg1 ;
-(id)annotationProviderForOfflineDBWithAssetID:(id)arg1 ;
-(void)removeOfflineDBFilesWithAssetID:(id)arg1 exceptBookVersionString:(id)arg2 ;
-(char)takeBookOfflineIfManagedWithAnnotationProvider:(id)arg1 assetID:(id)arg2 ;
@end

