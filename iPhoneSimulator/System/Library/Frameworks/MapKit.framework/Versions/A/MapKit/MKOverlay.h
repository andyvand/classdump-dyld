/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK4 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_MK4)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_MK4)boundingMapRect;
-(CGPoint)coordinate;

@end

