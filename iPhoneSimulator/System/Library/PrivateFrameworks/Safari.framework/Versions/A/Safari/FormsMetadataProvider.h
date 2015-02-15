/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WBSFormsMetadataProvider.h>

@class NSString;

@interface FormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {

	Array* _framesForAllForms;
	Array* _metadataForAllForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long formCount; 
-(id)initWithFrames:(const Array*)arg1 metadataForAllForms:(const Array*)arg2 ;
-(unsigned long long)formCount;
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
@end

