/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ShareKit/ShareKit-Structs.h>
@interface NSSharingPlugInHelper : NSObject
+(id)userDefaults;
+(void)parseExtensionItem:(id)arg1 getBodyMessage:(id*)arg2 includeURLsInBodyMessage:(char)arg3 getFileURLs:(id*)arg4 getDistantURLs:(id*)arg5 getImages:(id*)arg6 getImageCount:(long long*)arg7 writeImagesAsFileURLs:(char)arg8 ;
+(char)frameworkModificationDateIsEqual:(id)arg1 ;
+(id)frameworkLastModificationDate;
+(id)plugInIdentifier;
+(id)_serviceBundle;
+(void)imageURLForItemProvider:(id)arg1 writeIfNeeded:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_asyncExtractFromExtensionItem:(id)arg1 wantsTextItems:(char)arg2 wantsFileURLItems:(char)arg3 wantsDistantURLs:(char)arg4 wantsImages:(char)arg5 treatImagesAsFileURLItems:(char)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)_extractFromExtensionItem:(id)arg1 getTextItems:(id*)arg2 getFileURLItems:(id*)arg3 getDistantURLs:(id*)arg4 getUrlToItemProvider:(id*)arg5 getImageItems:(id*)arg6 treatImagesAsFileURLItems:(char)arg7 ;
+(void)_asyncParseExtensionItem:(id)arg1 wantsBodyMessage:(char)arg2 wantsDistantURLs:(char)arg3 wantsImages:(char)arg4 includeURLsInBodyMessage:(char)arg5 writeImagesAsFileURLs:(char)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)temporaryImageFileName;
+(id)writeImage:(id)arg1 ;
+(id)imageByScalingImage:(id)arg1 proportionallyToSize:(CGSize)arg2 ;
+(id)computeAlternateImageFromImage:(id)arg1 ;
+(id)attributedStringByTrimmingCharactersInSet:(id)arg1 inAttributedString:(id)arg2 ;
+(void)extractFromExtensionItem:(id)arg1 getTextItems:(id*)arg2 getFileURLItems:(id*)arg3 getDistantURLItems:(id*)arg4 getImageItems:(id*)arg5 treatImagesAsFileURLItems:(char)arg6 ;
+(void)parseExtensionItem:(id)arg1 getBodyMessage:(id*)arg2 includeURLsInBodyMessage:(char)arg3 getFileURLs:(id*)arg4 getDistantURLs:(id*)arg5 getImages:(id*)arg6 writeImagesAsFileURLs:(char)arg7 ;
+(id)imagesByScalingImages:(id)arg1 proportionallyToSize:(CGSize)arg2 ;
+(id)movieURLForShareProxyItem:(id)arg1 ;
+(void)startAccountSetupInMCCForPluginID:(id)arg1 ;
+(id)imageNamed:(id)arg1 ;
@end

