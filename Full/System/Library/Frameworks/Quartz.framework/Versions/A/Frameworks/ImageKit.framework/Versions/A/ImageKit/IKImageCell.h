/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKImageCell : NSObject {

	id _reserved;

}
+(char)delegatesImageManagementToDatasource;
+(char)trackingOfRequestingViewsEnabled;
+(void)setCurrentRequestingViewIdentifier:(id)arg1 ;
+(void)setTrackingOfRequestingViewsEnabled:(char)arg1 ;
+(void)setDelegatesImageManagementToDatasource:(char)arg1 ;
+(char)allowsIconSharingForThumbnailRequest:(id)arg1 ;
+(id)currentRequestingViewIdentifier;
-(unsigned long long)cacheIndex;
-(unsigned long long)dataSourceIndex;
-(void)validateDatasource;
-(char)shareIconIfPossible:(id)arg1 ;
-(void)imageDidChange;
-(char)isAnIcon;
-(id)initWithConcreteInstance:(id)arg1 ;
-(CGRect)inlinePreviewFrameForImageFrame:(CGRect)arg1 ;
-(id)thumbnailImage;
-(id)representedItem;
-(id)subtitleString;
-(int)bestImageSizeForRenderingSize:(CGSize)arg1 renderLevel:(int)arg2 renderType:(unsigned)arg3 ;
-(id)_delegatedImageToDraw;
-(char)imageIsImported;
-(void)setLastRenderedSize:(int)arg1 ;
-(id)dataSourcePath;
-(unsigned long long)indexOfRepresentedItem;
-(void)datasourceItemDidChange;
-(void)didRecoverImageFromCache;
-(void)setDataSourceIndex:(unsigned long long)arg1 ;
-(id)dataSourceImageRepresentationType;
-(char)datasourceIsParsed;
-(unsigned long long)cacheIndexValidateIfNeeded:(char)arg1 ;
-(char)_shareIconRef:(OpaqueIconRefRef)arg1 ;
-(int)lastRenderedSize;
-(id)cacheDatabase;
-(char)_shareIconIfPossible:(id)arg1 ;
-(char)_representationTypeCanBePlayed:(id)arg1 ;
-(void)setContentCanBePlayed:(char)arg1 ;
-(unsigned long long)_createNewEntryInCache:(id)arg1 ;
-(id)imageWrapperForType:(id)arg1 representation:(id)arg2 ;
-(id)dataSourceURL;
-(char)canDisplayInlinePreview;
-(id)inlinePreviewQuickLookProperties;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
-(id)image;
-(void)removeObjectForKey:(id)arg1 ;
-(void)reloadData;
-(void)setDataSource:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(float)alpha;
-(id)dataSource;
-(id)parent;
-(id)previewItemTitle;
-(id)previewItemURL;
-(void)setParent:(id)arg1 ;
-(unsigned long long)version;
-(id)titleString;
-(id)sourceUID;
-(void)setSourceUID:(id)arg1 ;
-(void)parentWillDie:(id)arg1 ;
@end

