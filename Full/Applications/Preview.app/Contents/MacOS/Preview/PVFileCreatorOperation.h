/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSMutableArray;

@interface PVFileCreatorOperation : NSOperation {

	/*^block*/id _blockToExecute;
	NSURL* _basePath;
	NSMutableArray* _resultArray;

}
-(id)initWithBlock:(/*^block*/id)arg1 usingBasePath:(id)arg2 resultArray:(id)arg3 ;
-(void)dealloc;
-(void)main;
@end
