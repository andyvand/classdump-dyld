/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKEpubWebProcessPlugIn.bundle/Contents/MacOS/BKEpubWebProcessPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKEpubWebProcessPlugIn/BKEpubWebProcessPlugIn-Structs.h>
#import <BKEpubWebProcessPlugIn/NSCoding.h>

@class IMBloomFilter, NSString;

@interface IMDocumentFragmentFilter : NSObject <NSCoding> {

	IMBloomFilter* _filter;
	SCD_Struct_IM6 _specification;

}

@property (readonly) NSString * usageDescription; 
-(long long)indexSize;
-(NSString *)usageDescription;
-(id)initWithDocument:(id)arg1 filterSpecification:(SCD_Struct_IM7)arg2 ;
-(char)mightContainFragment:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
