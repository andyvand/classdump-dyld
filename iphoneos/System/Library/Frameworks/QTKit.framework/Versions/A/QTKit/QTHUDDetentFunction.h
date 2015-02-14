/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface QTHUDDetentFunction : NSObject {

	double* _sortedDetents;
	unsigned long long _detentCount;
	double _detentMagnitude;

}
-(id)initWithDetents:(id)arg1 detentMagnitude:(double)arg2 ;
-(double)inputValueAtOutputValue:(double)arg1 ;
-(double)outputValueAtInputValue:(double)arg1 ;
-(double)detentMagnitude;
-(double)outputValueAtInputValue:(double)arg1 isInDetent:(char*)arg2 indexOfDetent:(unsigned long long*)arg3 ;
-(id)detents;
-(id)init;
-(void)dealloc;
@end

