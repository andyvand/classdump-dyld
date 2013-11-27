/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject {

	NSURL* mGeneratedFileURL;
	double mDuration;

}

@property (nonatomic,readonly) NSURL * generatedFileURL; 
-(id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2 ;
-(id)generatedFileURL;
-(void)generateFileWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
@end
