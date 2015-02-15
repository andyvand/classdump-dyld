/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKImageBrowserDatasourceItemPrivate
@optional
-(char)datasourceItemIsThreadSafe;
-(CGRect*)imageSourceRectForCell:(id)arg1 withThumbnailSize:(CGSize)arg2;
-(id)_ikThumbnailImage;
-(id)IKImageRepresentationWithType:(id)arg1;
-(id)posterImage;
-(char)holesFlavor;
-(OpaqueIconRefRef)createAlternativeIconRepresentationWithOptions:(id)arg1;
-(OpaqueIconRefRef)createAlternativeIconRepresentation;
-(id)imageToDrawForCell:(id)arg1;
-(CFDictionaryRef)quickLookThumbnailOptions;
-(CGRect*)quickLookContentFrameForImageSize:(CGSize)arg1;
-(id)inlinePreviewQuickLookClientProperties;
-(id)tagImageForCell:(id)arg1;
-(char)isDimmed;
-(id)statusInfoForCell:(id)arg1;
-(id)statusInfo;
-(id)statusImageForCell:(id)arg1;
-(double)aspectRatio;

@end

