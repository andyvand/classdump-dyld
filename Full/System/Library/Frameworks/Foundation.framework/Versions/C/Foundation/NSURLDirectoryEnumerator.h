/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/id _errorHandler;
	char shouldContinue;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)directoryAttributes;
-(void)skipDescendants;
-(void)setErrorHandler:(id)arg1 ;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)errorHandler;
-(void)finalize;
-(void)dealloc;
-(id)nextObject;
-(unsigned long long)level;
-(id)fileAttributes;
-(void)skipDescendents;
@end

