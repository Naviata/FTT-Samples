# FTT Samples

Sample terrains and other content for
[Flynn's Terrain Tools](https://github.com/Naviata/FTT-Releases) — more will be added here over time,
each in a folder of its own.

## FTT_TerrainSample

A ready-made DayZ terrain to start from: a 2048 × 2048 heightfield at 10 m, so 20,480 m across, with
its TerrainBuilder project, `layers.cfg`, `config.cpp`, central economy files and 188 measured
template libraries.

### Download it

**Get the zip from [Releases](https://github.com/Naviata/FTT-Samples/releases)** — not the green
*Code* button. The repository can hold nothing over 100 MB, and the sample's TerrainBuilder project
has a 704 MB data file (`ftt_terrainsample_009.v4d`) and a 262 MB cache block that only the zip
carries. The folder here is everything else, for browsing.

Extract it so it sits at **`P:\FTT_TerrainSample`**. That is where FTT looks for it; anywhere else
works too, but you will be asked where you put it.

### Using it in FTT

**Terrain Creation → Create Terrain Source → From the FTT sample.** FTT copies what a terrain needs
under a new name and renames it through the configs, so the sample itself is left untouched and can
be used again.

### What is left out, deliberately

These folders are kept, empty, so the layout is the one TerrainBuilder and FTT expect:

| Folder | Why it is empty |
|---|---|
| `terrain/source/Imagery` | The satellite map, mask and heightmap rasters — gigabytes, and yours to make |
| `terrain/source/QGIS` | The GIS project the terrain was built from |
| `terrain/source/gtt_export` | Working exports from the terrain generator |
| `data` | The exported layer tiles, which TerrainBuilder writes again on export |

`navmesh`, `terrain/source/L3DT` and `terrain/source/LandBuilder` are empty in the original too.
