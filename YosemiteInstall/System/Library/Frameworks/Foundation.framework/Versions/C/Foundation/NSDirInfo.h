/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary {

	NSMutableDictionary* dict;

}
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(char)arg4 hardLinkPath:(id)arg5 ;
-(id)initWithDictionary:(id)arg1 copyItems:(char)arg2 ;
-(id)serializeToData;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)keyEnumerator;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

