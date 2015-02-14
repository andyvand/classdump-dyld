/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSString, NSMutableSet;

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {

	NSString* _destinationPath;
	NSMutableSet* _skippedPaths;

}
+(id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(char)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
-(char)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(char)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)_shouldCopyItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(char)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
-(void)dealloc;
@end

