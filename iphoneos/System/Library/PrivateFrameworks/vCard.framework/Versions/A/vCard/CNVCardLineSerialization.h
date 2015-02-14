/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNVCardLineSerialization <NSObject>
@required
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertLine:(id)arg1 atMarker:(id)arg2;
-(char)canSerializeString:(id)arg1;
-(char)canSerializeArray:(id)arg1;
-(char)canSerializeData:(id)arg1;
-(void)serializeLine:(id)arg1;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
-(void)serializeOpaqueValue:(id)arg1;
-(void)serializeVersionPlaceholder;
-(void)serializeData:(id)arg1;
-(void)serializeString:(id)arg1;

@end

