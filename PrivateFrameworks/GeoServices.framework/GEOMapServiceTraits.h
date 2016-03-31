/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapServiceTraits : PBCodable <NSCopying> {
    int _action;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    int _carHeadunitConnectionType;
    int _carHeadunitInteractionModel;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    int _deviceBatteryState;
    NSMutableArray *_deviceDisplayLanguages;
    int _deviceInterfaceOrientation;
    NSString *_deviceKeyboardLocale;
    GEOLocation *_deviceLocation;
    NSString *_deviceSpokenLocale;
    NSString *_displayRegion;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int carHeadunitPixelHeight : 1; 
        unsigned int carHeadunitPixelWidth : 1; 
        unsigned int mapZoomLevel : 1; 
        unsigned int action : 1; 
        unsigned int carHeadunitConnectionType : 1; 
        unsigned int carHeadunitInteractionModel : 1; 
        unsigned int deviceBatteryState : 1; 
        unsigned int deviceInterfaceOrientation : 1; 
        unsigned int mode : 1; 
        unsigned int photosCount : 1; 
        unsigned int reviewUserPhotosCount : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int source : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int isAPICall : 1; 
    } _has;
    BOOL _isAPICall;
    GEOMapRegion *_mapRegion;
    double _mapZoomLevel;
    int _mode;
    NSMutableArray *_photoSizes;
    unsigned int _photosCount;
    NSString *_providerID;
    NSMutableArray *_reviewUserPhotoSizes;
    unsigned int _reviewUserPhotosCount;
    unsigned int _sequenceNumber;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionId;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    GEOTraitsTransitScheduleFilter *_transitScheduleFilter;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _transportTypes;
}

@property (nonatomic) int action;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic) int carHeadunitConnectionType;
@property (nonatomic) int carHeadunitInteractionModel;
@property (nonatomic, retain) NSString *carHeadunitManufacturer;
@property (nonatomic, retain) NSString *carHeadunitModel;
@property (nonatomic) double carHeadunitPixelHeight;
@property (nonatomic) double carHeadunitPixelWidth;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic, retain) NSMutableArray *deviceDisplayLanguages;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic, retain) NSString *deviceKeyboardLocale;
@property (nonatomic, retain) GEOLocation *deviceLocation;
@property (nonatomic, retain) NSString *deviceSpokenLocale;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic) BOOL hasAction;
@property (nonatomic, readonly) BOOL hasAppIdentifier;
@property (nonatomic, readonly) BOOL hasAppMajorVersion;
@property (nonatomic, readonly) BOOL hasAppMinorVersion;
@property (nonatomic) BOOL hasCarHeadunitConnectionType;
@property (nonatomic) BOOL hasCarHeadunitInteractionModel;
@property (nonatomic, readonly) BOOL hasCarHeadunitManufacturer;
@property (nonatomic, readonly) BOOL hasCarHeadunitModel;
@property (nonatomic) BOOL hasCarHeadunitPixelHeight;
@property (nonatomic) BOOL hasCarHeadunitPixelWidth;
@property (nonatomic) BOOL hasDeviceBatteryState;
@property (nonatomic) BOOL hasDeviceInterfaceOrientation;
@property (nonatomic, readonly) BOOL hasDeviceKeyboardLocale;
@property (nonatomic, readonly) BOOL hasDeviceLocation;
@property (nonatomic, readonly) BOOL hasDeviceSpokenLocale;
@property (nonatomic, readonly) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasIsAPICall;
@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMapZoomLevel;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) BOOL hasPhotosCount;
@property (nonatomic, readonly) BOOL hasProviderID;
@property (nonatomic) BOOL hasReviewUserPhotosCount;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic, readonly) BOOL hasTransitScheduleFilter;
@property (nonatomic) BOOL isAPICall;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) double mapZoomLevel;
@property (nonatomic) int mode;
@property (nonatomic, retain) NSMutableArray *photoSizes;
@property (nonatomic) unsigned int photosCount;
@property (nonatomic, retain) NSString *providerID;
@property (nonatomic, retain) NSMutableArray *reviewUserPhotoSizes;
@property (nonatomic) unsigned int reviewUserPhotosCount;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic) int source;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic, retain) GEOTraitsTransitScheduleFilter *transitScheduleFilter;
@property (nonatomic, readonly) int*transportTypes;
@property (nonatomic, readonly) unsigned int transportTypesCount;

- (int)action;
- (void)addDeviceDisplayLanguage:(id)arg1;
- (void)addPhotoSizes:(id)arg1;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)addTransportType:(int)arg1;
- (id)appIdentifier;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (int)carHeadunitConnectionType;
- (int)carHeadunitInteractionModel;
- (id)carHeadunitManufacturer;
- (id)carHeadunitModel;
- (double)carHeadunitPixelHeight;
- (double)carHeadunitPixelWidth;
- (void)clearDeviceDisplayLanguages;
- (void)clearPhotoSizes;
- (void)clearReviewUserPhotoSizes;
- (void)clearTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceBatteryState;
- (id)deviceDisplayLanguageAtIndex:(unsigned int)arg1;
- (id)deviceDisplayLanguages;
- (unsigned int)deviceDisplayLanguagesCount;
- (int)deviceInterfaceOrientation;
- (id)deviceKeyboardLocale;
- (id)deviceLocation;
- (id)deviceSpokenLocale;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (BOOL)hasAction;
- (BOOL)hasAppIdentifier;
- (BOOL)hasAppMajorVersion;
- (BOOL)hasAppMinorVersion;
- (BOOL)hasCarHeadunitConnectionType;
- (BOOL)hasCarHeadunitInteractionModel;
- (BOOL)hasCarHeadunitManufacturer;
- (BOOL)hasCarHeadunitModel;
- (BOOL)hasCarHeadunitPixelHeight;
- (BOOL)hasCarHeadunitPixelWidth;
- (BOOL)hasDeviceBatteryState;
- (BOOL)hasDeviceInterfaceOrientation;
- (BOOL)hasDeviceKeyboardLocale;
- (BOOL)hasDeviceLocation;
- (BOOL)hasDeviceSpokenLocale;
- (BOOL)hasDisplayRegion;
- (BOOL)hasIsAPICall;
- (BOOL)hasMapRegion;
- (BOOL)hasMapZoomLevel;
- (BOOL)hasMode;
- (BOOL)hasPhotosCount;
- (BOOL)hasProviderID;
- (BOOL)hasReviewUserPhotosCount;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionId;
- (BOOL)hasSource;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (BOOL)hasTimeSinceMapViewportChanged;
- (BOOL)hasTransitScheduleFilter;
- (unsigned int)hash;
- (BOOL)isAPICall;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (double)mapZoomLevel;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)photoSizes;
- (id)photoSizesAtIndex:(unsigned int)arg1;
- (unsigned int)photoSizesCount;
- (unsigned int)photosCount;
- (id)providerID;
- (BOOL)readFrom:(id)arg1;
- (id)reviewUserPhotoSizes;
- (id)reviewUserPhotoSizesAtIndex:(unsigned int)arg1;
- (unsigned int)reviewUserPhotoSizesCount;
- (unsigned int)reviewUserPhotosCount;
- (unsigned int)sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setAction:(int)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setCarHeadunitConnectionType:(int)arg1;
- (void)setCarHeadunitInteractionModel:(int)arg1;
- (void)setCarHeadunitManufacturer:(id)arg1;
- (void)setCarHeadunitModel:(id)arg1;
- (void)setCarHeadunitPixelHeight:(double)arg1;
- (void)setCarHeadunitPixelWidth:(double)arg1;
- (void)setDeviceBatteryState:(int)arg1;
- (void)setDeviceDisplayLanguages:(id)arg1;
- (void)setDeviceInterfaceOrientation:(int)arg1;
- (void)setDeviceKeyboardLocale:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceSpokenLocale:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setHasAction:(BOOL)arg1;
- (void)setHasCarHeadunitConnectionType:(BOOL)arg1;
- (void)setHasCarHeadunitInteractionModel:(BOOL)arg1;
- (void)setHasCarHeadunitPixelHeight:(BOOL)arg1;
- (void)setHasCarHeadunitPixelWidth:(BOOL)arg1;
- (void)setHasDeviceBatteryState:(BOOL)arg1;
- (void)setHasDeviceInterfaceOrientation:(BOOL)arg1;
- (void)setHasIsAPICall:(BOOL)arg1;
- (void)setHasMapZoomLevel:(BOOL)arg1;
- (void)setHasMode:(BOOL)arg1;
- (void)setHasPhotosCount:(BOOL)arg1;
- (void)setHasReviewUserPhotosCount:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionId:(BOOL)arg1;
- (void)setHasSource:(BOOL)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setIsAPICall:(BOOL)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapZoomLevel:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setPhotoSizes:(id)arg1;
- (void)setPhotosCount:(unsigned int)arg1;
- (void)setProviderID:(id)arg1;
- (void)setReviewUserPhotoSizes:(id)arg1;
- (void)setReviewUserPhotosCount:(unsigned int)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSource:(int)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (void)setTransitScheduleFilter:(id)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned int)arg2;
- (int)source;
- (unsigned int)timeSinceMapEnteredForeground;
- (unsigned int)timeSinceMapViewportChanged;
- (id)transitScheduleFilter;
- (int)transportTypeAtIndex:(unsigned int)arg1;
- (int*)transportTypes;
- (unsigned int)transportTypesCount;
- (int)uiActionType;
- (void)writeTo:(id)arg1;

@end
