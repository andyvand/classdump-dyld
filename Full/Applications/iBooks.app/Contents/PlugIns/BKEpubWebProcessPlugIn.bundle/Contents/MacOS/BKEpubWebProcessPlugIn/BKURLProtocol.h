/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKEpubWebProcessPlugIn.bundle/Contents/MacOS/BKEpubWebProcessPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKEpubWebProcessPlugIn/BKEpubWebProcessPlugIn-Structs.h>
#import <CFNetwork/NSURLProtocol.h>
#import <BKEpubWebProcessPlugIn/NSStreamDelegate.h>

@class NSString;

@interface BKURLProtocol : NSURLProtocol <NSStreamDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(IMFairPlayContextManagerRef)contextManager;
+(id)bookContentsPath;
+(void)setBookContentsPath:(id)arg1 ;
+(id)bookSinfData;
+(id)bookResourceData;
+(void)setBookSinfData:(id)arg1 ;
+(void)registerBKURLProtocol;
+(void)setBookResourceData:(id)arg1 ;
+(void)createSharedFairPlayContextManager;
+(void)unregisterBKURLProtocol;
+(void)releaseSharedFairPlayContextManager;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)setConnection:(id)arg1 ;
+(void)setPaginationMode:(char)arg1 ;
+(char)paginationMode;
+(id)connection;
+(char)canInitWithRequest:(id)arg1 ;
-(id)createIDPFXORMaskWithEPubID:(id)arg1 ;
-(id)createAdobeXORMaskWithEPubID:(id)arg1 ;
-(id)unencryptFontWithAssetInfo:(id)arg1 fileData:(id)arg2 URL:(id)arg3 ;
-(char)isImageMIMEType:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end
