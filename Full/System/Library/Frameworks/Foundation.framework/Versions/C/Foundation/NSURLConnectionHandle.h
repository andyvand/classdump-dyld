/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLHandle.h>
#import <Foundation/NSURLConnectionDelegate.h>

@class NSURLRequest, NSURLConnection, NSString;

@interface NSURLConnectionHandle : NSURLHandle <NSURLConnectionDelegate> {

	NSURLRequest* req;
	NSURLConnection* conn;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canInitWithURL:(id)arg1 ;
+(id)cachedHandleForURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 cached:(char)arg2 ;
-(id)propertyForKeyIfAvailable:(id)arg1 ;
-(void)endLoadInBackground;
-(char)writeProperty:(id)arg1 forKey:(id)arg2 ;
-(id)loadInForeground;
-(void)beginLoadInBackground;
-(void)connection:(id)arg1 didFailLoadingWithError:(id)arg2 ;
-(void)dealloc;
-(char)writeData:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
@end

