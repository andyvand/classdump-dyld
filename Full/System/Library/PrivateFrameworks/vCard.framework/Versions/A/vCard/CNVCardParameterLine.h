/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNVCardParameterLine <CNVCardLine>
@required
-(void)addParameterWithName:(id)arg1 value:(id)arg2;
-(void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2;
-(char)canSerializeWithStrategy:(id)arg1;
-(void)serializeValueWithStrategy:(id)arg1;

@end

