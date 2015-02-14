/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKScannerDeviceViewHandler, NSURL, IKNSelection;

@interface IKScanArea : NSObject {

	CGPoint _pt0;
	CGPoint _pt1;
	CGPoint _pt2;
	CGPoint _pt3;
	double _angle0;
	double _angle1;
	double _angle2;
	double _angle3;
	double _angle;
	double _rho0;
	double _rho1;
	double _rho2;
	double _rho3;
	CGRect _scanArea;
	CGRect _scanAreaFlipped;
	CGRect _scanAreaFlippedNonClipped;
	int _autoResolution;
	int _autoBitDepth;
	IKScannerDeviceViewHandler* _scannerDeviceViewHandler;
	CGImageRef _cgImage;
	NSURL* _scannedURL;
	int _index;
	char _shouldAutoScan;
	char _scanComplete;
	char _scanInProgress;
	id _extraStorage;
	double _scanProgressDone;
	IKNSelection* _selection;
	CGRect _ikSelectionRect;
	CGPoint _ikSelectionPosition;
	double _ikSelectionAngle;
	double _overviewToFinalScaling;

}

@property (assign) IKScannerDeviceViewHandler * scannerDeviceViewHandler;              //@synthesize scannerDeviceViewHandler=_scannerDeviceViewHandler - In the implementation block
@property (assign) CGImageRef cgImage;                                                 //@synthesize cgImage=_cgImage - In the implementation block
@property (copy) NSURL * scannedURL;                                                   //@synthesize scannedURL=_scannedURL - In the implementation block
@property (assign) double angle0;                                                      //@synthesize angle0=_angle0 - In the implementation block
@property (assign) double angle1;                                                      //@synthesize angle1=_angle1 - In the implementation block
@property (assign) double angle2;                                                      //@synthesize angle2=_angle2 - In the implementation block
@property (assign) double angle3;                                                      //@synthesize angle3=_angle3 - In the implementation block
@property (assign) double rho0;                                                        //@synthesize rho0=_rho0 - In the implementation block
@property (assign) double rho1;                                                        //@synthesize rho1=_rho1 - In the implementation block
@property (assign) double rho2;                                                        //@synthesize rho2=_rho2 - In the implementation block
@property (assign) double rho3;                                                        //@synthesize rho3=_rho3 - In the implementation block
@property (assign) CGPoint pt0;                                                        //@synthesize pt0=_pt0 - In the implementation block
@property (assign) CGPoint pt1;                                                        //@synthesize pt1=_pt1 - In the implementation block
@property (assign) CGPoint pt2;                                                        //@synthesize pt2=_pt2 - In the implementation block
@property (assign) CGPoint pt3;                                                        //@synthesize pt3=_pt3 - In the implementation block
@property (assign) double angle;                                                       //@synthesize angle=_angle - In the implementation block
@property (assign) CGRect scanArea;                                                    //@synthesize scanArea=_scanArea - In the implementation block
@property (assign) CGRect scanAreaFlipped;                                             //@synthesize scanAreaFlipped=_scanAreaFlipped - In the implementation block
@property (assign) CGRect scanAreaFlippedNonClipped;                                   //@synthesize scanAreaFlippedNonClipped=_scanAreaFlippedNonClipped - In the implementation block
@property (assign) int autoResolution;                                                 //@synthesize autoResolution=_autoResolution - In the implementation block
@property (assign) int autoBitDepth;                                                   //@synthesize autoBitDepth=_autoBitDepth - In the implementation block
@property (assign) int index;                                                          //@synthesize index=_index - In the implementation block
@property (assign) char shouldAutoScan;                                                //@synthesize shouldAutoScan=_shouldAutoScan - In the implementation block
@property (assign) char scanComplete;                                                  //@synthesize scanComplete=_scanComplete - In the implementation block
@property (assign) char scanInProgress;                                                //@synthesize scanInProgress=_scanInProgress - In the implementation block
@property (assign) id extraStorage;                                                    //@synthesize extraStorage=_extraStorage - In the implementation block
@property (assign) IKNSelection * selection;                                           //@synthesize selection=_selection - In the implementation block
@property (assign) double scanProgressDone;                                            //@synthesize scanProgressDone=_scanProgressDone - In the implementation block
@property (readonly) CGRect ikSelectionRect;                                           //@synthesize ikSelectionRect=_ikSelectionRect - In the implementation block
@property (readonly) CGPoint ikSelectionPosition;                                      //@synthesize ikSelectionPosition=_ikSelectionPosition - In the implementation block
@property (readonly) double ikSelectionAngle;                                          //@synthesize ikSelectionAngle=_ikSelectionAngle - In the implementation block
@property (assign) double overviewToFinalScaling;                                      //@synthesize overviewToFinalScaling=_overviewToFinalScaling - In the implementation block
-(void)setIndex:(int)arg1 ;
-(CGImageRef)cgImage;
-(id)imageRepresentationType;
-(id)imageRepresentation;
-(id)imageUID;
-(id)imageTitle;
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(char)scanInProgress;
-(void)setScanInProgress:(char)arg1 ;
-(void)setScannedURL:(NSURL *)arg1 ;
-(IKScannerDeviceViewHandler *)scannerDeviceViewHandler;
-(void)setScanAreaFlipped:(CGRect)arg1 ;
-(void)setScanArea:(CGRect)arg1 ;
-(CGRect)scanArea;
-(void)setScanAreaFlippedNonClipped:(CGRect)arg1 ;
-(char)validScanAreaForBuffer:(vImage_Buffer*)arg1 ;
-(char)simpleScanAreaDetection:(vImage_Buffer*)arg1 top:(int)arg2 bottom:(int)arg3 left:(int)arg4 right:(int)arg5 validateResult:(char)arg6 ;
-(char)simpleScanAreaDetection:(vImage_Buffer*)arg1 validateResult:(char)arg2 ;
-(void)createCGImageFromBuffer;
-(char)scanComplete;
-(NSURL *)scannedURL;
-(id)initWithImage:(CGImageRef)arg1 rect:(CGRect)arg2 ;
-(id)initWithIKNSelection:(id)arg1 ;
-(char)update:(vImage_Buffer*)arg1 imageIndex:(unsigned char)arg2 ;
-(void)setScanProgressDone:(double)arg1 ;
-(void)setScannerDeviceViewHandler:(IKScannerDeviceViewHandler *)arg1 ;
-(void)setCgImage:(CGImageRef)arg1 ;
-(CGPoint)pt0;
-(void)setPt0:(CGPoint)arg1 ;
-(CGPoint)pt1;
-(void)setPt1:(CGPoint)arg1 ;
-(CGPoint)pt2;
-(void)setPt2:(CGPoint)arg1 ;
-(CGPoint)pt3;
-(void)setPt3:(CGPoint)arg1 ;
-(double)angle0;
-(void)setAngle0:(double)arg1 ;
-(double)angle1;
-(void)setAngle1:(double)arg1 ;
-(double)angle2;
-(void)setAngle2:(double)arg1 ;
-(double)angle3;
-(void)setAngle3:(double)arg1 ;
-(double)rho0;
-(void)setRho0:(double)arg1 ;
-(double)rho1;
-(void)setRho1:(double)arg1 ;
-(double)rho2;
-(void)setRho2:(double)arg1 ;
-(double)rho3;
-(void)setRho3:(double)arg1 ;
-(CGRect)scanAreaFlipped;
-(CGRect)scanAreaFlippedNonClipped;
-(int)autoResolution;
-(void)setAutoResolution:(int)arg1 ;
-(int)autoBitDepth;
-(void)setAutoBitDepth:(int)arg1 ;
-(char)shouldAutoScan;
-(void)setShouldAutoScan:(char)arg1 ;
-(void)setScanComplete:(char)arg1 ;
-(id)extraStorage;
-(void)setExtraStorage:(id)arg1 ;
-(double)scanProgressDone;
-(void)setSelection:(IKNSelection *)arg1 ;
-(CGRect)ikSelectionRect;
-(CGPoint)ikSelectionPosition;
-(double)ikSelectionAngle;
-(double)overviewToFinalScaling;
-(void)setOverviewToFinalScaling:(double)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(int)index;
-(IKNSelection *)selection;
-(void)cleanup;
@end

