/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary, MKStreetViewGeometry, MKStreetViewMinimapGeometry, CALayer, MKPanoramaAnnotationGeometry, MKMapSnapshotCreator, MKPanoramaSphereGeometry, MKPanorama, NSString, MKStreetViewTexture, MKSearchResult, MKPanoramaLoader, MKPanoramaPlaceholderGeometry, MKStreetViewLabelCache, EAGLContext, MKPanoramaTextures, MKStreetViewTileDecoder, NSTimer;



@interface MKStreetViewInternal : NSObject 
{
    MKSearchResult *searchResult;
    MKPanorama *panorama;
    MKPanorama *previousPanorama;
    MKPanoramaLoader *panoramaLoader;
    NSString *copyright;
    NSUInteger maxZoomLevel;
    float maxZoomScaleFactor;
    double yaw;
    double pitch;
    id delegate;
    NSMutableDictionary *anchorTouches;
    BOOL hasTouched;
    BOOL dragging;
    BOOL pitchLocked;
    BOOL zooming;
    BOOL canTap;
    struct CGPoint { 
        float x; 
        float y; 
    } tapPoint;
    NSUInteger nextValidTapCount;
    float anchorTheta;
    float anchorPhi;
    float anchorFov;
    float anchorNearX;
    float anchorNearY;
    float anchorAngle;
    float yawVelocity;
    float pitchVelocity;
    float previousYawVelocity;
    float previousPitchVelocity;
    float yawTolerance;
    double lastTouchTime;
    BOOL pipPressed;
    NSTimer *fadeTimer;
    NSTimer *animationTimer;
    NSTimer *tapTimer;
    double panoTransitionStartTime;
    double mapTransitionStartTime;
    double zoomTransitionStartTime;
    double transitionDuration;
    BOOL reverseMapTransition;
    float transitionDirectionX;
    float transitionDirectionY;
    float transitionDirectionZ;
    float transitionYawAdjust;
    double lastScrollTime;
    double bounceStartTime;
    float bounceCenter;
    float bounceInitialOffset;
    float bounceInitialVelocity;
    float zoomStartFov;
    float zoomEndFov;
    EAGLContext *context;
    NSUInteger renderbuffer;
    NSUInteger framebuffer;
    NSInteger bufferWidth;
    NSInteger bufferHeight;
    float fov;
    float vfov;
    float near;
    float nearx;
    float neary;
    float far;
    MKPanoramaPlaceholderGeometry *placeholder;
    MKPanoramaSphereGeometry *sphere;
    MKPanoramaSphereGeometry *previousSphere;
    MKPanoramaAnnotationGeometry *annotationGeometry;
    MKPanoramaAnnotationGeometry *previousAnnotationGeometry;
    MKPanoramaTextures *textures;
    MKPanoramaTextures *previousTextures;
    MKStreetViewTileDecoder *tileDecoder;
    MKStreetViewLabelCache *labelCache;
    MKStreetViewGeometry *googleQuad;
    MKStreetViewTexture *googleTexture;
    MKStreetViewMinimapGeometry *minimap;
    MKStreetViewTexture *minimapRingTexture;
    MKStreetViewTexture *minimapPinTexture;
    MKStreetViewTexture *minimapRotatorTexture;
    MKStreetViewTexture *minimapTexture;
    struct CGPoint { 
        float x; 
        float y; 
    } minimapPinLocation;
    BOOL hasRequestedAllTiles;
    CALayer *logoLayer;
    void *introSurfaceBufferRef;
    NSUInteger introSurfaceTexture;
    NSUInteger introSurfaceWidth;
    NSUInteger introSurfaceHeight;
    struct CGPoint { 
        float x; 
        float y; 
    } introZoomPoint;
    MKMapSnapshotCreator *mapSnapShotCreator;
    struct $_466 { 
        unsigned int panoramaWillChange : 1; 
        unsigned int panoramaDidChange : 1; 
        unsigned int streetViewWillClose : 1; 
        unsigned int streetViewDidClose : 1; 
        unsigned int didFailWithError : 1; 
        unsigned int didUpdatePanoramaMetadata : 1; 
        unsigned int userDidTap : 1; 
        unsigned int streetViewWillChangeOrientation : 1; 
        unsigned int streetViewDidChangeOrientation : 1; 
    } delegateImplements;
}

@property(retain) MKMapSnapshotCreator *mapSnapShotCreator; /* unknown property attribute: VmapSnapShotCreator */
@property(retain) MKSearchResult *searchResult; /* unknown property attribute: VsearchResult */
@property(retain) CALayer *logoLayer; /* unknown property attribute: VlogoLayer */
@property(retain) NSString *copyright; /* unknown property attribute: Vcopyright */
@property(retain) MKStreetViewLabelCache *labelCache; /* unknown property attribute: VlabelCache */
@property(retain) MKStreetViewTileDecoder *tileDecoder; /* unknown property attribute: VtileDecoder */
@property(retain) MKPanoramaTextures *previousTextures; /* unknown property attribute: VpreviousTextures */
@property(retain) MKPanoramaTextures *textures; /* unknown property attribute: Vtextures */
@property(retain) MKPanoramaAnnotationGeometry *previousAnnotationGeometry; /* unknown property attribute: VpreviousAnnotationGeometry */
@property(retain) MKPanoramaAnnotationGeometry *annotationGeometry; /* unknown property attribute: VannotationGeometry */
@property(retain) MKPanoramaSphereGeometry *previousSphere; /* unknown property attribute: VpreviousSphere */
@property(retain) MKPanoramaSphereGeometry *sphere; /* unknown property attribute: Vsphere */
@property(retain) MKPanorama *previousPanorama; /* unknown property attribute: VpreviousPanorama */
@property(retain) MKPanorama *panorama; /* unknown property attribute: Vpanorama */


- (id)mapSnapShotCreator;
- (void)setMapSnapShotCreator:(id)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (id)logoLayer;
- (void)setLogoLayer:(id)arg1;
- (id)copyright;
- (void)setCopyright:(id)arg1;
- (id)labelCache;
- (void)setLabelCache:(id)arg1;
- (id)tileDecoder;
- (void)setTileDecoder:(id)arg1;
- (id)previousTextures;
- (void)setPreviousTextures:(id)arg1;
- (id)textures;
- (void)setTextures:(id)arg1;
- (id)previousAnnotationGeometry;
- (void)setPreviousAnnotationGeometry:(id)arg1;
- (id)annotationGeometry;
- (void)setAnnotationGeometry:(id)arg1;
- (id)previousSphere;
- (void)setPreviousSphere:(id)arg1;
- (id)sphere;
- (void)setSphere:(id)arg1;
- (id)previousPanorama;
- (void)setPreviousPanorama:(id)arg1;
- (id)panorama;
- (void)setPanorama:(id)arg1;

@end