/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/NSCopying.h>

@class NSString, NSURL, ICScannerDevice, ICScannerFunctionalUnit, IKImageCorrectionHandler, IKScanUIController, NSMutableArray, NSMutableDictionary, IKScanInfo;

@interface IKScan : NSObject <NSCopying> {

	NSString* _documentName;
	NSString* _documentDisplayName;
	NSString* _userSpecifiedDocumentName;
	NSURL* _documentLocation;
	NSString* _fileFormat;
	ICScannerDevice* _scannerDevice;
	ICScannerFunctionalUnit* _functionalUnit;
	unsigned long long _pixelDataType;
	unsigned long long _bitDepth;
	unsigned long long _measurementUnit;
	unsigned long long _resolution;
	unsigned long long _scaleFactor;
	char _useScanRect;
	CGRect _scanRect;
	unsigned long long _scanRectOrientation;
	unsigned char _thresholdForBlackAndWhiteScanning;
	unsigned long long _overviewResolution;
	unsigned long long _userRequestedOverviewResolution;
	unsigned long long _documentType;
	unsigned long long _flatbedOrientation;
	char _duplexScanningEnabled;
	unsigned long long _oddPageOrientation;
	unsigned long long _evenPageOrientation;
	long long _autoSelection;
	double _rotationAngle;
	IKImageCorrectionHandler* _imageCorrectionHandler;
	char _createSingleDocument;
	NSURL* _postProcessingApp;
	CGSize _selectionSize;
	CGRect _scanRectNonClipped;
	double _scanPercentDone;
	IKScanUIController* _delegate;
	char _scanComplete;
	char _scanToTempDirectory;
	char _scanIsICARawScan;
	long long _state;
	NSURL* _scannedImageURL;
	NSURL* _finalDestURL;
	NSMutableArray* _completedScans;
	unsigned long long _currentScanType;
	NSMutableDictionary* _metaData;
	IKScanInfo* _scanInfo;
	long long _numberOfSelections;
	long long _currentSelectionIndex;
	char _selfTestRunning;
	char _transferModeMemoryBased;
	char _reviewSimpleScanResults;
	char _scanFailed;
	char _createSingleDocumentReChecked;
	NSString* _lastDocumentName;
	NSURL* _lastDocumentLocation;
	int _currentScanIndex;
	long long _scannerReportedError;

}

@property (assign) IKScanUIController * delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * documentName;                                //@synthesize documentName=_documentName - In the implementation block
@property (nonatomic,copy) NSString * documentDisplayName;                         //@synthesize documentDisplayName=_documentDisplayName - In the implementation block
@property (copy) NSString * lastDocumentName;                                      //@synthesize lastDocumentName=_lastDocumentName - In the implementation block
@property (copy) NSString * userSpecifiedDocumentName;                             //@synthesize userSpecifiedDocumentName=_userSpecifiedDocumentName - In the implementation block
@property (copy) NSURL * documentLocation;                                         //@synthesize documentLocation=_documentLocation - In the implementation block
@property (copy) NSURL * lastDocumentLocation;                                     //@synthesize lastDocumentLocation=_lastDocumentLocation - In the implementation block
@property (copy) NSString * fileFormat;                                            //@synthesize fileFormat=_fileFormat - In the implementation block
@property (assign) unsigned long long pixelDataType;                               //@synthesize pixelDataType=_pixelDataType - In the implementation block
@property (assign) unsigned long long bitDepth;                                    //@synthesize bitDepth=_bitDepth - In the implementation block
@property (assign) unsigned long long measurementUnit;                             //@synthesize measurementUnit=_measurementUnit - In the implementation block
@property (assign) unsigned long long resolution;                                  //@synthesize resolution=_resolution - In the implementation block
@property (assign) unsigned long long scaleFactor;                                 //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) char useScanRect;                                               //@synthesize useScanRect=_useScanRect - In the implementation block
@property (assign) CGRect scanRect;                                                //@synthesize scanRect=_scanRect - In the implementation block
@property (assign) unsigned long long scanRectOrientation;                         //@synthesize scanRectOrientation=_scanRectOrientation - In the implementation block
@property (assign) unsigned long long documentType;                                //@synthesize documentType=_documentType - In the implementation block
@property (assign) unsigned long long flatbedOrientation;                          //@synthesize flatbedOrientation=_flatbedOrientation - In the implementation block
@property (assign) char duplexScanningEnabled;                                     //@synthesize duplexScanningEnabled=_duplexScanningEnabled - In the implementation block
@property (assign) unsigned long long oddPageOrientation;                          //@synthesize oddPageOrientation=_oddPageOrientation - In the implementation block
@property (assign) unsigned long long evenPageOrientation;                         //@synthesize evenPageOrientation=_evenPageOrientation - In the implementation block
@property (assign) long long autoSelection;                                        //@synthesize autoSelection=_autoSelection - In the implementation block
@property (assign) double rotationAngle;                                           //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign) IKImageCorrectionHandler * imageCorrectionHandler;              //@synthesize imageCorrectionHandler=_imageCorrectionHandler - In the implementation block
@property (assign,nonatomic) char createSingleDocument;                            //@synthesize createSingleDocument=_createSingleDocument - In the implementation block
@property (copy) NSURL * scannedImageURL;                                          //@synthesize scannedImageURL=_scannedImageURL - In the implementation block
@property (copy) NSURL * finalDestURL;                                             //@synthesize finalDestURL=_finalDestURL - In the implementation block
@property (assign) NSMutableArray * completedScans;                                //@synthesize completedScans=_completedScans - In the implementation block
@property (assign) double scanPercentDone;                                         //@synthesize scanPercentDone=_scanPercentDone - In the implementation block
@property (assign) long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign) char scanToTempDirectory;                                       //@synthesize scanToTempDirectory=_scanToTempDirectory - In the implementation block
@property (assign) char scanComplete;                                              //@synthesize scanComplete=_scanComplete - In the implementation block
@property (assign) char scanIsICARawScan;                                          //@synthesize scanIsICARawScan=_scanIsICARawScan - In the implementation block
@property (readonly) unsigned long long overviewResolution;                        //@synthesize overviewResolution=_overviewResolution - In the implementation block
@property (assign) CGSize selectionSize;                                           //@synthesize selectionSize=_selectionSize - In the implementation block
@property (assign) CGRect scanRectNonClipped;                                      //@synthesize scanRectNonClipped=_scanRectNonClipped - In the implementation block
@property (retain) IKScanInfo * scanInfo;                                          //@synthesize scanInfo=_scanInfo - In the implementation block
@property (assign) char selfTestRunning;                                           //@synthesize selfTestRunning=_selfTestRunning - In the implementation block
@property (assign) char reviewSimpleScanResults;                                   //@synthesize reviewSimpleScanResults=_reviewSimpleScanResults - In the implementation block
@property (assign) char createSingleDocumentReChecked;                             //@synthesize createSingleDocumentReChecked=_createSingleDocumentReChecked - In the implementation block
@property (assign) long long scannerReportedError;                                 //@synthesize scannerReportedError=_scannerReportedError - In the implementation block
-(unsigned long long)scaleFactor;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(unsigned long long)overviewResolution;
-(IKImageCorrectionHandler *)imageCorrectionHandler;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)device:(id)arg1 didEncounterError:(id)arg2 ;
-(void)device:(id)arg1 didReceiveStatusInformation:(id)arg2 ;
-(void)setDocumentName:(NSString *)arg1 ;
-(NSString *)documentName;
-(NSString *)fileFormat;
-(void)setFileFormat:(NSString *)arg1 ;
-(void)setReviewSimpleScanResults:(char)arg1 ;
-(char)reviewSimpleScanResults;
-(void)updateFunctionalUnit:(id)arg1 ;
-(double)scanPercentDone;
-(void)setScanPercentDone:(double)arg1 ;
-(void)scannerDevice:(id)arg1 didScanToURL:(id)arg2 newStyle:(char)arg3 ;
-(id)tiffDataFromScanData:(id)arg1 ;
-(CGSize)selectionSize;
-(CGRect)scanRectNonClipped;
-(unsigned long long)resolution;
-(void)scannerDevice:(id)arg1 didCompleteOverviewScanWithError:(id)arg2 ;
-(void)scannerDevice:(id)arg1 didCompleteScanWithError:(id)arg2 ;
-(void)updatePercentDone;
-(char)scanComplete;
-(void)setScanComplete:(char)arg1 ;
-(double)screenDPI;
-(IKScanInfo *)scanInfo;
-(void)setScanInfo:(IKScanInfo *)arg1 ;
-(void)setResolution:(unsigned long long)arg1 ;
-(void)setBitDepth:(unsigned long long)arg1 ;
-(void)setPixelDataType:(unsigned long long)arg1 ;
-(unsigned long long)pixelDataType;
-(void)setUseScanRect:(char)arg1 ;
-(void)setSelfTestRunning:(char)arg1 ;
-(void)prepareForNumberOfSelections:(long long)arg1 ;
-(char)startScan:(id)arg1 ;
-(void)setMeasurementUnit:(unsigned long long)arg1 ;
-(void)setDuplexScanningEnabled:(char)arg1 ;
-(void)setScanRect:(CGRect)arg1 ;
-(void)setScanRectNonClipped:(CGRect)arg1 ;
-(void)setSelectionSize:(CGSize)arg1 ;
-(CGRect)scanRect;
-(void)setImageCorrectionHandler:(IKImageCorrectionHandler *)arg1 ;
-(void)setCreateSingleDocument:(char)arg1 ;
-(void)setDocumentLocation:(NSURL *)arg1 ;
-(void)setUserSpecifiedDocumentName:(NSString *)arg1 ;
-(NSURL *)finalDestURL;
-(void)doneWithScan:(id)arg1 ;
-(void)setFlatbedOrientation:(unsigned long long)arg1 ;
-(void)setScanRectOrientation:(unsigned long long)arg1 ;
-(void)setOddPageOrientation:(unsigned long long)arg1 ;
-(void)setEvenPageOrientation:(unsigned long long)arg1 ;
-(void)setCompletedScans:(NSMutableArray *)arg1 ;
-(void)setDocumentDisplayName:(NSString *)arg1 ;
-(void)setLastDocumentName:(NSString *)arg1 ;
-(void)postError:(long long)arg1 ;
-(NSURL *)scannedImageURL;
-(void)CGImageSaveToFile:(CGImageRef)arg1 name:(const char*)arg2 ;
-(CGImageRef)createCGImageFromRawScanData:(id)arg1 ;
-(char)scanIsICARawScan;
-(CGImageRef)createCGImageFromRawScanURL;
-(CGImageRef)createCGImageFromImageURL;
-(char)scanNextSelection;
-(NSMutableArray *)completedScans;
-(CFDataRef)createImageData:(CGImageRef)arg1 resolution:(unsigned long long)arg2 format:(CFStringRef)arg3 ;
-(void)applyImageCorrection:(CGImageRef)arg1 url:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)rotateAndCrop:(CGImageRef)arg1 url:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)errorAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(unsigned long long)freeSpaceAtURL:(id)arg1 ;
-(void)deleteTempFileForURL:(id)arg1 ;
-(void)handleCGImageDestinationFinalize:(char)arg1 url:(id)arg2 format:(id)arg3 ;
-(void)savePDFJPEGPage:(id)arg1 toPDFURL:(id)arg2 ;
-(void)appendPDFJPEGPage:(id)arg1 toPDFURL:(id)arg2 pageCount:(unsigned long long)arg3 ;
-(unsigned long long)flatbedOrientation;
-(id)imagePropertiesForAppending:(CGImageRef)arg1 ;
-(void)setScannedImageURL:(NSURL *)arg1 ;
-(void)doPostProcessing:(id)arg1 ;
-(void)autoScansNextPage;
-(char)scanToTempDirectory;
-(void)setFinalDestURL:(NSURL *)arg1 ;
-(CGImageRef)createCGImageFromURL;
-(char)createSingleDocument;
-(void)writeImage:(CGImageRef)arg1 toPDFURL:(id)arg2 metadata:(id)arg3 ;
-(void)appendImage:(CGImageRef)arg1 toImageURL:(id)arg2 ;
-(void)writeImage:(CGImageRef)arg1 toImageURL:(id)arg2 ;
-(void)appendURL:(id)arg1 toPDFURL:(id)arg2 ;
-(void)appendURL:(id)arg1 toImageURL:(id)arg2 ;
-(CGImageRef)createSizeOptimizeImage:(CGImageRef)arg1 ;
-(void)saveToFinalDestination:(CGImageRef)arg1 url:(id)arg2 ;
-(long long)scannerReportedError;
-(char)selfTestRunning;
-(void)setScannerReportedError:(long long)arg1 ;
-(NSString *)documentDisplayName;
-(NSURL *)documentLocation;
-(NSString *)userSpecifiedDocumentName;
-(void)setScanToTempDirectory:(char)arg1 ;
-(void)setScanIsICARawScan:(char)arg1 ;
-(char)useScanRect;
-(char)createSingleDocumentReChecked;
-(NSString *)lastDocumentName;
-(id)tempScanDir;
-(unsigned long long)measurementUnit;
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(char)duplexScanningEnabled;
-(unsigned long long)oddPageOrientation;
-(unsigned long long)evenPageOrientation;
-(void)dumpVendorFeatures;
-(void)setCreateSingleDocumentReChecked:(char)arg1 ;
-(CFDataRef)copyJPEGData:(CGImageRef)arg1 resolution:(unsigned long long)arg2 ;
-(id)saveImage:(CGImageRef)arg1 toDownloadURL:(id)arg2 documentName:(id)arg3 imageType:(id)arg4 optimize:(char)arg5 ;
-(char)startOverviewScan:(id)arg1 ;
-(unsigned long long)scanRectOrientation;
-(long long)autoSelection;
-(void)setAutoSelection:(long long)arg1 ;
-(NSURL *)lastDocumentLocation;
-(void)setLastDocumentLocation:(NSURL *)arg1 ;
-(id)init;
-(void)setDelegate:(IKScanUIController *)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKScanUIController *)delegate;
-(void)reset;
-(unsigned long long)bitDepth;
@end

