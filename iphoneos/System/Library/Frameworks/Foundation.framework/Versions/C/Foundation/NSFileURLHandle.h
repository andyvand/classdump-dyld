/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLHandle.h>

@class NSString, NSFileHandle, NSDictionary;

@interface NSFileURLHandle : NSURLHandle {

	NSString* _path;
	NSFileHandle* _fh;
	NSDictionary* _properties;

}
+(char)canInitWithURL:(id)arg1 ;
+(id)cachedHandleForURL:(id)arg1 ;
+(void)initialize;
-(id)initWithURL:(id)arg1 cached:(char)arg2 ;
-(id)propertyForKeyIfAvailable:(id)arg1 ;
-(void)flushCachedData;
-(void)endLoadInBackground;
-(char)writeProperty:(id)arg1 forKey:(id)arg2 ;
-(id)loadInForeground;
-(void)beginLoadInBackground;
-(void)_backgroundFileLoadCompleted:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)writeData:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
@end

