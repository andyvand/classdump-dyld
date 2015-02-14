/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <vCard/vCard-Structs.h>
@interface CNVCardDataAnalyzer : NSObject
+(CNVCardDataAnalysis)analyzeData:(id)arg1 ;
+(char)tryUTF8VCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(char)tryUTF16LEVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(char)tryUTF16BEVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(char)tryUTF16LEBOMVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(char)tryUTF16BEBOMVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(char)tryUTF16WithByteOrderMarker:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(char)tryUTF16ByInferrence:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(char)tryVCardEncoding:(unsigned long long)arg1 data:(id)arg2 analysis:(CNVCardDataAnalysis*)arg3 ;
+(id)data:(id)arg1 byPrependingData:(id)arg2 ;
+(char)data:(id)arg1 hasPrefix:(id)arg2 ;
+(char)data:(id)arg1 containsSubdata:(id)arg2 ;
+(unsigned char)data:(id)arg1 byteAtIndex:(unsigned long long)arg2 ;
@end

