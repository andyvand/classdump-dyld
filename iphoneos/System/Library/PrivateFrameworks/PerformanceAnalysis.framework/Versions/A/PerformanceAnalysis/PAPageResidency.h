/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/NSCoding.h>

@interface PAPageResidency : NSObject <NSCoding> {

	unsigned residentPages;
	unsigned dirtyPages;
	unsigned copiedPages;
	unsigned reclaimablePages;
	unsigned swappedPages;
	unsigned speculativePages;
	unsigned residentNonSpecPages;
	char isDetailed;

}

@property (assign) unsigned residentPages; 
@property (assign) unsigned dirtyPages; 
@property (assign) unsigned copiedPages; 
@property (assign) unsigned reclaimablePages; 
@property (assign) unsigned swappedPages; 
@property (assign) unsigned speculativePages; 
@property (assign) unsigned residentNonSpecPages; 
@property (assign) char isDetailed; 
-(void)addResidency:(id)arg1 ;
-(char)isSane;
-(id)resString;
-(id)resBytesString;
-(void)setIsDetailed:(char)arg1 ;
-(unsigned)swappedPages;
-(void)setSwappedPages:(unsigned)arg1 ;
-(unsigned)residentPages;
-(void)setResidentPages:(unsigned)arg1 ;
-(unsigned)residentNonSpecPages;
-(void)setResidentNonSpecPages:(unsigned)arg1 ;
-(unsigned)speculativePages;
-(void)setSpeculativePages:(unsigned)arg1 ;
-(unsigned)dirtyPages;
-(void)setDirtyPages:(unsigned)arg1 ;
-(unsigned)copiedPages;
-(void)setCopiedPages:(unsigned)arg1 ;
-(void)setReclaimablePages:(unsigned)arg1 ;
-(id)initWithPageResidency:(id)arg1 ;
-(char)isDetailed;
-(void)subtractResidency:(id)arg1 ;
-(long long)compareDirtyAndSwapped:(id)arg1 ;
-(long long)compareClean:(id)arg1 ;
-(long long)compareSpec:(id)arg1 ;
-(unsigned long long)cleanNonSpecBytes;
-(unsigned long long)residentBytes;
-(unsigned long long)dirtyBytes;
-(unsigned long long)copiedBytes;
-(unsigned long long)reclaimableBytes;
-(unsigned long long)swappedBytes;
-(unsigned long long)speculativeBytes;
-(unsigned long long)residentNonSpecBytes;
-(long long)compareResident:(id)arg1 ;
-(long long)compareNonSpecResident:(id)arg1 ;
-(long long)compareDirty:(id)arg1 ;
-(unsigned)reclaimablePages;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

