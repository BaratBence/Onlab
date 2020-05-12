public class Sensor {
    public void setSensor1Position(String sensor1Position) {
        Sensor1Position = sensor1Position;
    }

    public void setSensor2Position(String sensor2Position) {
        Sensor2Position = sensor2Position;
    }

    public void setSize(String size) {
        this.size = size;
    }

    String Sensor1Position;

    public String getSensor1Position() {
        return Sensor1Position;
    }

    public String getSensor2Position() {
        return Sensor2Position;
    }

    public String getSize() {
        return size;
    }

    String Sensor2Position;
    String size;

}
