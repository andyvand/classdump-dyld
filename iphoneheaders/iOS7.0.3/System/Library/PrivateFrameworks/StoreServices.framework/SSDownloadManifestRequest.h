/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSURLRequest;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {

	int _manifestFormat;
	BOOL _shouldHideUserPrompts;
	NSURLRequest* _urlRequest;

}

@property (readonly) NSURLRequest * URLRequest; 
@property (assign) BOOL shouldHideUserPrompts; 
@property (assign,nonatomic,@dynamic) <SSDownloadManifestRequestDelegate> * delegate; 
@property (assign) int manifestFormat; 
-(id)initWithURLRequest:(id)arg1 ;
-(id)URLRequest;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithManifestResponseBlock:(/*^block*/ id)arg1 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(int)manifestFormat;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setManifestFormat:(int)arg1 ;
@end
