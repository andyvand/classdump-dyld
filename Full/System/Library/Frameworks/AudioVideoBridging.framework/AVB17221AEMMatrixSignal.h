/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMModelObject.h>

@class NSArray;

@interface AVB17221AEMMatrixSignal : AVB17221AEMModelObject {

	NSArray* signals;

}

@property (copy) NSArray * signals; 
-(char)updateWithDescriptor:(/*function pointer*/void**)arg1 descriptorLength:(unsigned short)arg2 ;
-(unsigned long long)setDescriptor:(/*function pointer*/void**)arg1 ;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2 ;
-(id)xmlKey;
-(char)isExpectedDescriptorType:(unsigned short)arg1 ;
-(id)objectLogName;
-(void)setSignals:(NSArray *)arg1 ;
-(NSArray *)signals;
-(id)plistRepresentation;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
